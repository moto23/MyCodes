class MyStack {
   
    int size;
    queue<int>q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
         
            q.push(x);
            for(int i=0;i<q.size()-1;i++){
                q.push(q.front());
                q.pop();
            }
            
         
    }
    
    int pop() {
       
             int val=q.front();
             q.pop();
            
            return val;
        
    }
    
    int top() {
         
             int s= q.front();
             return s;
        
       
    }
    
    bool empty() {
         return q.empty();
    }
};
