class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
        
    }
    
    void push(int x) {
        // q1.emplace(x);
        q1.push(x);
    }
    
    int pop() {
        if(q1.empty()) return 0;
        int size = q1.size();
        while(size > 1){
            q2.push(q1.front());
            q1.pop();
            size--;
        }
        int temp = q1.front();
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return temp;

        //2nd approach for using only single queue
        // for(int i = 0; i < q1.size() - 1; i++){
        //     q1.push(q1.front());
        //     q1.pop();
        // }
        // int temp = q1.front();
        // q1.pop();
        // return temp;
    }
    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */