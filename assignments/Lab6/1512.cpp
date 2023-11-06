class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        map<int, int> mp;
        for(int i = -1; ++i < n;){
            if(mp.count(nums[i])){
                count += mp[nums[i]];
                mp[nums[i]]++;
            }
            else mp[nums[i]]++;
        }
        return count;
    }
};