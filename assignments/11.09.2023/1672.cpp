class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0;
        int max_sum = 0;
        max_sum = max(sum,max_sum);
        // for(int i = 0; i < accounts.size(); i++){
        for (const auto &i: accounts) {
            // for(int j = 0; j < accounts[i].size(); j++){
            //     sum += accounts[i][j];
            // }
            // sum = accumulate(accounts[i].begin(), accounts[i].end(), 0);
            sum = accumulate(i.begin(), i.end(), 0);
            max_sum = max(sum, max_sum);
            // sum = 0;
        }
        return max_sum;
    }
};