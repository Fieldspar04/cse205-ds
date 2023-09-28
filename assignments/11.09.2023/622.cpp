class MyCircularQueue {
public:
    vector<int> q;
    // int *arr;
    int front;
    int size;

    MyCircularQueue(int k) {
        q = vector<int>(k);
        front = 0; size = 0;
        // arr = new int[size];
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        q[(front + size) % q.size()] = value;
        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        front = (front + 1) % q.size();
        size--;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return q[front];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return q[(front + size - 1) % q.size()];
    }
    
    bool isEmpty() {
        return !size;
    }
    
    bool isFull() {
        return size == q.size();
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */