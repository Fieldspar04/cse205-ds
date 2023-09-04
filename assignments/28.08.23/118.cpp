class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i,j;
        vector<vector<int>>ans;
        for(i=0;i<numRows;i++){
            vector<int>rows(i+1,1);
            for(j=1;j<i;j++){
                rows[j]=ans[i-1][j-1] + ans[i-1][j];
            }
            ans.push_back(rows);
        }
        return ans;
    }
};