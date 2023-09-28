class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int temp = 0, n = matrix.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                temp = matrix[j][i];
                matrix[j][i] = matrix[i][j];
                matrix[i][j] = temp;
            }
        }
        int j = 1;
        for(int i = 0; i < n; i++){
            for(j = 0; j < n/2; j++)
                swap(matrix[i][j], matrix[i][n - j - 1]);
        }
    }
};