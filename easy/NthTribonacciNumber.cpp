// runtime: 0ms, faster than 100% of C++ online submissions for N-th Tribonacci Number
// memory usage: 5.9MB, less than 51.31% of C++ online submissions for N-th Tribonacci Number

class Solution {
public:
    int tribonacci(int n) {
        int f0 = 0, f1 = 1, f2 = 1, f3 = 2;
        
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        if (n == 2)
            return 1;
        
        for (int i = 3; i <= n; i++) {
            f3 = f0 + f1 + f2;
            f0 = f1, f1 = f2, f2 = f3;
        }
        
        return f3;
    }
};
