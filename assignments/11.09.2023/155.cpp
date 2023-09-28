class MinStack {
public:
    // int mini = INT_MAX;
    stack<int> temp;
    stack<int> st;

    MinStack() {
        // stack<string> st;
        // return st;
    }
    
    void push(int val) {
        // if(mini >= val){
        //     mini = val;
        //     if(!temp.empty())
        //         temp.pop();
        if(temp.empty() || val <= temp.top())
            temp.push(val);
        // }
        st.push(val);
    }
    
    void pop() {
        if(!st.empty() && !temp.empty() && (temp.top() == st.top()))
            temp.pop();
        if(!st.empty())
            st.pop();
        // continue;
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return temp.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */