class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max_sum=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
           sum=max(sum+nums[i],nums[i]);
            max_sum=max(sum,max_sum);
        }
        return max_sum;
    }
};