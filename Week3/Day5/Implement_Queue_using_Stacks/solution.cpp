class MyQueue {
public:
stack<int> q;
stack<int> p;
    MyQueue() {
        
    }
    
    void push(int x) {
       p.push(x);
    }
    
    int pop() {
        if(q.empty()){
            while(!p.empty()){
                q.push(p.top());
                p.pop();
            }
        }
        int x=q.top();
        q.pop();
        return x;

    }
    
    int peek() {
        if(q.empty()){
            while(!p.empty()){
                q.push(p.top());
                p.pop();
            }
        }
        return q.top();
    }
    
    bool empty() {
        return q.empty() && p.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
