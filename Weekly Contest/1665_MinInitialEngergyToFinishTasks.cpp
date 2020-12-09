struct CustomCompare
{
    bool operator()(const vector<int>& lhs, const vector<int>& rhs)
    {
        return lhs[1] > rhs[1];
    }
};

class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        priority_queue<vector<int>, vector<vector<int>>, CustomCompare> pq;
        for(int i = 0; i < tasks.size(); i++){
            tasks[i][1] = tasks[i][1] - tasks[i][0];
            pq.push(tasks[i]);
        }
        int res = pq.top()[1];
        while(!pq.empty()){
            if(res >= pq.top()[1])
                res += pq.top()[0];
            else{
                res = pq.top()[1] + pq.top()[0];
            }
            pq.pop();
        }
        return res;
    }
};