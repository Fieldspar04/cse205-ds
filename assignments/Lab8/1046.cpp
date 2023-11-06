class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int i : stones) q.push(i);
        int ans = 0;
        while(q.size() > 1){
            int temp = q.top();
            q.pop();
            temp -= q.top();
            q.pop();
            // ans = temp;
            if(temp) q.push(temp);
            // if(!q.empty()) ans = q.top();
        }
        if(!q.empty()) ans = q.top();
        else ans = 0;
        return ans;
    }
};