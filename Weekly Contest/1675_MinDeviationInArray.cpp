class Solution {
public:
	int minimumDeviation(vector<int>& nums) {
		priority_queue <int, vector<int>, greater<int> > min_heap;
		priority_queue <int, vector<int>> max_heap;
		for (auto& it : nums) {
			min_heap.push(it);
			max_heap.push(it);
		}
		int res = max_heap.top() - min_heap.top();
		while (!min_heap.empty() && min_heap.top() % 2 == 1) {
			res = std::min(res, max_heap.top() - min_heap.top());
			int temp = min_heap.top() * 2;
			min_heap.pop();
			min_heap.push(temp);
			max_heap.push(temp);
		}
		res = std::min(res, max_heap.top() - min_heap.top());
		max_heap = priority_queue<int>();
		int min = min_heap.top();
		while (!min_heap.empty())
		{
			max_heap.push(min_heap.top());
			min_heap.pop();
		}
		min_heap.push(min);
		while (!max_heap.empty() && max_heap.top() % 2 == 0) {
			int temp = max_heap.top() / 2;
			max_heap.pop();
			max_heap.push(temp);
			min_heap.push(temp);
			res = std::min(res, max_heap.top() - min_heap.top());
		}
		return res;
	}
};