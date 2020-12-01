class Solution {
public:
	int minMoves(vector<int>& nums, int limit) {
		int N = nums.size();
		vector<int> moves_boundary(limit * 2 + 2, 0);
		// collect moves boundary for all pairs
		for (int i = 0; i < N / 2; ++i) {
			int l = nums[i], r = nums[N - 1 - i];
			--moves_boundary[min(l, r) + 1];
			--moves_boundary[l + r];
			++moves_boundary[l + r + 1];
			++moves_boundary[max(l, r) + limit + 1];
		}
		int res = N, needed_moves = N;
		// scan thru 2 to 2 * Limit to find minimum moves needed
		for (int i = 2; i <= limit * 2; ++i) {
			needed_moves += moves_boundary[i];
			res = min(res, needed_moves);
		}
		return res;
	}
};