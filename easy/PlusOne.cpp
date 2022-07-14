// runtime: 3ms, faster than 64.43% of C++ online submissions for Plus One
// memory usage: 8.8MB, less than 12.03% of C++ online submissions for Plus One

class Solution {
public:
    void increment(vector<int> &d, int i, int n) {
        if (i < 0) {
            d.insert(d.begin(), 1);
            return;
        }
    
        if (d[i] == 9) {
            d[i] = 0;
            increment(d, i-1, n);
        }
        else d[i]++;
    }
    
    vector<int> plusOne(vector<int>& digits) {
        increment(digits, digits.size() - 1, 0);
        return digits;
    }
};
