class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        if(nums.size() == 3)
            return 0;
        int N = nums.size(), res = 0;
		// inc[i] means how long the Longest Increasing Subsequence is before i
        vector<int> inc(N, 0), dec(N, 0);
        for(int i = 1; i < N; i++){
            for(int j = 0; j < i; j++){
                if(nums[i] > nums[j]){
                    inc[i] = max(inc[i], inc[j] + 1);
                }
            }
        }
		// dec[i] means how long the Longest Decreasing Subsequence is after i
        for(int i = N - 2; i > -1; i--){
            for(int j = N - 1; j > i; j--){
                if(nums[i] > nums[j]){
                    dec[i] = max(dec[i], dec[j] + 1);
                }
            }
        }
        for(int i = 1; i < N - 1; i++){
			// A mountain Array need to have at least one LIS and LDS before and after the peak
			// => inc[i] > 0 && dec[i] > 0
            if(inc[i] > 0 && dec[i] > 0){
                res = max(res, 1 + inc[i] + dec[i]);
            }
        }
        return N - res;
    }
};