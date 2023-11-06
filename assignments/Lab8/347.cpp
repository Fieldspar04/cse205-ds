class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i : nums) mp[i]++;
        priority_queue<pair<int,int>>q;
        for(auto i : mp) q.push({i.second, i.first});

        vector<int> ans;
        while(!q.empty() && k--){
            auto it = q.top();
            ans.push_back(it.second);
            q.pop();
        }
        return ans;
    }
};