class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> q;
        for(int i = -1; ++i< nums.size();) q.push({nums[i],i});
        vector<int> t;
        for(int i = -1; ++i<k;){
            auto it = q.top();
            t.push_back(it.second);
            q.pop();
        }
        sort(t.begin(),t.end());
        vector<int> ans;
        for(int i : t){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};