// runtime: 0ms, faster than 100% of C++ online submissions for Queue using Stacks
// memory usage: 7.1MB, less than 13.26% of C++ online submissions for Queue using Stacks

class MyQueue {
private:
    void stack_swap(stack<int> &s1, stack<int> &s2) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }
    
public:
    stack<int> s;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        stack<int> tmp;
        
        stack_swap(s, tmp);
        int front = tmp.top();
        tmp.pop();
        stack_swap(tmp, s);
        
        return front;
    }
    
    int peek() {
        stack<int> tmp;
        
        stack_swap(s, tmp);
        int front = tmp.top();
        stack_swap(tmp, s);
        
        return front;
    }
    
    bool empty() {
        return s.empty();
    }
};
