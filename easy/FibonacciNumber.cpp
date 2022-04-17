// runtime: 0ms, faster than 100% of C++ online submissions for Fibonacci Number
// memory usage: 6MB, less than 42.28% of C++ online submissions for Fibonacci Number

class Solution {
public:
    int fib(int n) {
        int f1 = 0, f2 = 1, f3;
        
        if (n == 0)
            return f1;
        if (n == 1)
            return f2;
        
        for (int i = 2; i <= n; i++) {
            f3 = f1 + f2;
            f1 = f2, f2 = f3; 
        }
            
        return f3;
    }
};
