class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left = 0;
        int right = matrix[0].size() - 1;
        int top = 0;
        int bottom = matrix.size() - 1;
        vector<int> ans;
        
        if (matrix.empty() || matrix[0].empty()) {
            return ans; 
        }

        while(left <= right && top <= bottom){
            for(int i = left - 1; ++i <= right; ){
                ans.push_back(matrix[top][i]);
            }
            top++;
        
            for(int j = top - 1; ++j <= bottom;){
                ans.push_back(matrix[j][right]);
            }
            right--;

            if(top <= bottom){
                for(int i = right + 1; --i >= left;){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            // bottom--;

            if(left <= right){
                for(int j = bottom + 1; --j >= top;){
                    ans.push_back(matrix[j][left]);
                }
                left++;
            }
        }
        return ans;
    }
};