// runtime: 3ms, faster than 82.71% of C++ online submissions for Consecutive Characters
// memory usage: 6.8MB, less than 69.46% of C++ online submissions for Consecutive Characters

class Solution {
public:
    int maxPower(string s) {
        int counter = 1, maximum = 1;
        int n = s.length();
        
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i-1]) maximum = max(++counter, maximum);
            else counter = 1;
        }
        
        return maximum;
    }
};
