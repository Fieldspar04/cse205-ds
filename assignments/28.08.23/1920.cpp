class Solution {
public:
    void solve(int i,vector<int>nums, vector<int>&ans){
        for(i;i<nums.size();i++){
            ans.push_back(nums[nums[i]]);
        }
    }

    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        int i;
        solve(0,nums,ans);
        return ans;
    }
};