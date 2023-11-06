class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i = -1; ++i <nums.size();) mp[nums[i]] = i;
        vector<int> ans;
        for(int i = -1; ++i <nums.size();){
          int complement=target - nums[i];
           if(mp.count(complement) && mp[complement] != i){
               ans.push_back(i);
               ans.push_back(mp[complement]);
               break;
            }
        }
        return ans;
    }
};