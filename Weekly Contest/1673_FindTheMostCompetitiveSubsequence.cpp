class Solution {
public:
	vector<int> mostCompetitive(vector<int>& nums, int k) {
		vector<int> stack;
		for (int i = 0; i < nums.size(); ++i) {
			// 1. only switch when new items is smaller than the last item in stack, which yields stack.back() > nums[i]
			// 2. after pop,  items left in stack = (stack.size() - 1), items left in nums = (nums.size() - i)
			// so before pop, we have to make sure there will be at least k items available
			// which yields => stack.size() - 1 + nums.size() - i >= k
			while (!stack.empty() && stack.back() > nums[i] && stack.size() - 1 + nums.size() - i >= k)
				stack.pop_back();
			if (stack.size() < k)
				stack.push_back(nums[i]);
		}
		return stack;
	}
};