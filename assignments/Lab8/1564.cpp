class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> q;
        for(int i :nums) q.push(i);
        int ans = 1;
        ans *= q.top()-1;
        q.pop();
        ans *= q.top()-1;
        return ans;
    }
};