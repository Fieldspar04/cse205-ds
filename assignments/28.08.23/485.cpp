class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result=0,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                result=max(result,count);
                count=0;
            }
            else
                count++;
        }
        return max(result,count);

        // int temp=1,n;
        // for(int i=0;i<nums.size();i++){
        //     if(temp==nums[i]){
        //         if(temp==nums[i+1])
        //             n++;
        //     }
        // }
        // return n;
    }
};