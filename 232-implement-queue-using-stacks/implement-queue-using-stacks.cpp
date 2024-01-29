class MyQueue {
public:
    stack<int> st, rmv;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!st.empty())
        {
            rmv.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!rmv.empty())
        {
            st.push(rmv.top());
            rmv.pop();
        }
    }
    
    int pop() {
        int ele = st.top();
        st.pop();
        return ele;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.empty();
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