// runtime: 33ms, faster than 67.11% of C++ online submissions for Assign Cookies
// memory usage: 17.5MB, less than 78.69% of C++ online submissions for Assign Cookies

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int res = 0;
        int n = s.size(), m = g.size();
        int i = 0, j = 0;
        
        while (i < n && j < m) {
            if (s[i] >= g[j])
                j++, res++;
            i++;
        }
        
        return res;
    }
};
