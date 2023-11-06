class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> q;
    int temp = 0;
    KthLargest(int k, vector<int>& nums) {
        for(int i  : nums) q.push(i);
        k--;
        while(k--)
        temp = k;
    }
    
    int add(int val) {
        q.push(val);
        stack<int> st;
        int ok = temp;  
        while(ok--){
            st.push(q.top());
            q.pop();
        }
        int ans = q.top();
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        return ans;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */