class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count,n=0;
        for(int i=0;i<nums.size();i++){
            count=0;
            int number= nums[i];
            while(number!=0){
                number/=10;
                count++;
            }
            if(count%2==0)
                n++;
        }
        return n;
    }
};