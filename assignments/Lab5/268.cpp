class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = -1; ++i < nums.size();){
            if(nums[i] != i) return i;
        }
        return nums.size();
    }
};