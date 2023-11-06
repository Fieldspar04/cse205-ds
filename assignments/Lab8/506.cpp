class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans(score.size());
        priority_queue<pair<int, int>> q;
        for(int i = -1; ++i < score.size();){
            q.push({score[i],i});
        }
        for(int i = -1; ++i < score.size();){
            auto it = q.top();
            if(i == 0) ans[it.second] = "Gold Medal";
            else if(i== 1) ans[it.second] = "Silver Medal";
            else if(i == 2) ans[it.second] = "Bronze Medal";
            else{
                ans[it.second] = to_string(i+ 1);
            }
            q.pop();
        }
        return ans;
    }
};