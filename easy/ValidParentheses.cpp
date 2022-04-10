// runtime: 3ms, faster than 34.98% of C++ online submissions for Valid Parentheses
// memory usage: 6.2MB, less than 96.22% of C++ online submissions for Valid Parentheses

class Solution {
public:
    bool isOpen(char c) {
        return (c == '(' || c == '[' || c == '{');
    }
    
    bool isValid(string s) {
        stack<char> open;
        
        for (auto par: s) {
            
            if (isOpen(par))
                open.push(par);
            else if(open.empty())
                return false;
            else if (par == ')' && open.top() == '(')
                open.pop();
            else if (par == ']' && open.top() == '[')
                open.pop();
            else if (par == '}' && open.top() == '{')
                open.pop();
            else 
                return false;
            
        }
        
        return open.empty();
    }
};
