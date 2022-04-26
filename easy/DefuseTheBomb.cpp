// runtime: 2ms, faster than 77.93% of C++ online submissions for Defuse the Bomb
// memory usage: 8.3MB, less than 77.93% of C++ online submissions for Defuse the Bomb

class Solution {    
private:
    inline int modulo(int n, int m) {
        int res = n % m;
        return res < 0 ? res + m : res;
    }
    
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n, 0);
        
        if (k == 0)
            return res;
        
        int abs_k = abs(k);
        
        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= abs_k; j++) {
                int offset = (k < 0 ? i-j : i+j); 
                res[i] += code[modulo(offset, n)]; 
            }
        }
        
        return res;
    }
};
