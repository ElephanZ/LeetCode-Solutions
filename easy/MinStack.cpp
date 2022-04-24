// runtime: 30ms, faster than 53.12% of C++ online submissions for Min Stack
// memory usage: 16.4MB, less than 69.48% of C++ online submissions for Min Stack

class MinStack {
public:
    stack<pair<int, int>> s;
    
    MinStack() {
        
    }
    
    void push(int val) {
        int minimum = (
            s.empty() ? val : min(val, this->getMin())
        );
        
        s.push({val, minimum});
    }
    
    void pop() {
        s.pop(); 
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
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
