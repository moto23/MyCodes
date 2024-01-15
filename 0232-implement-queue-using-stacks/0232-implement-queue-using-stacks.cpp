class MyQueue {
public:
    stack<int> st;
    stack<int> temp;
    MyQueue() {
        
    }
    
    void push(int x) { // TC = O(1)
        st.push(x);
    }
    
    int pop() { // remove at bottom TC = O(n)
        while(st.size()>0){
            int x = st.top();
            temp.push(x);
            st.pop();
        }
        int y = temp.top();
        temp.pop();
        while(temp.size()>0){
            st.push(temp.top());
            temp.pop();
        }
        return y;
    }
    
    int peek() { // retreive at bottom TC = O(n)
        while(st.size()>0){
            int x = st.top();
            temp.push(x);
            st.pop();
        }
        int y = temp.top();
        while(temp.size()>0){
            st.push(temp.top());
            temp.pop();
        }
        return y;
    }
    
    bool empty() {
        if(st.size()==0) return true;
        else return false;
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