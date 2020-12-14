class Solution {
public:
    int stoneGameVII(vector<int>& stones) {
        int N = stones.size();
        vector<int> sum(N + 1, 0);
        for(int i = 0; i < N; i++)
            sum[i + 1] += stones[i] + sum[i];
        vector<vector<int>> dp(N, vector<int>(N));
        for(int j = 1; j < N; j++){
            for(int i = j - 1; i >= 0; i--){
                dp[i][j] = max(sum[j + 1] - sum[i + 1] - dp[i + 1][j], sum[j] - sum[i] - dp[i][j - 1]);
            }
        }
        return dp[0][N-1];
    }
};