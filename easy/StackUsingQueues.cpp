// runtime: 0ms, faster than 100% of C++ online submissions for Stack Using Queues
// memory usage: 7MB, less than 19.98% of C++ online submissions for Stack Using Queues

class MyStack {
public:
    queue<int> q;
    
    MyStack() {
        
    }
    
    void push(int x) {
        queue<int> tmp; 
        tmp.push(x);
        
        while (!q.empty()) {
            tmp.push(q.front());
            q.pop();
        }
        while (!tmp.empty()) {
            q.push(tmp.front());
            tmp.pop();
        }
    }
    
    int pop() {
        int res = q.front();
        q.pop();
        return res;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};
