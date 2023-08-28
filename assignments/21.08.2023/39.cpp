class Solution {
public:
    void findCombination(int i,vector<int> &candidates,int target, vector<int>&temp, vector<vector<int>>&ans){
        if(i==candidates.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }
        //pick up the element
        if(candidates[i]<=target){
            temp.push_back(candidates[i]);
            findCombination(i,candidates,target-candidates[i],temp,ans);
            temp.pop_back();
        }
        findCombination(i+1,candidates,target,temp,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        findCombination(0,candidates,target,temp,ans);
        return ans;
    }
};