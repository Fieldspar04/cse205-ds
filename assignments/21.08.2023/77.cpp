class Solution {
public:
    void comb(int n, int k,int index, vector<int>&temp,vector<vector<int>>&ans){
        // if(k==1){
        //     for(;k<=n;k++){
        //         temp.push_back(k);
        //         ans.push_back(temp);
        //         return;
        //     }
        // }
        if(k==0){
            ans.push_back(temp);
            return;
        }
        if(index>n)
            return;
        //selecting ith element
        temp.push_back(index);
        comb(n,k-1,index+1,temp,ans);
        //rejecting ith element
        temp.pop_back();
        comb(n,k,index+1,temp,ans);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        comb(n,k,1,temp,ans);
        return ans;
    }
};