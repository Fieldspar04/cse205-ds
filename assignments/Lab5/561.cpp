class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        for(int i = -1; ++i < nums.size();){
            if(i%2==0) sum += nums[i];
        }
        return sum;
    }
};