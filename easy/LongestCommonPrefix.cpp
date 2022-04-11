// runtime: 4ms, faster than 74.06% of C++ online submissions for Longest Common Prefix
// memory usage: 9.3MB, less than 44.78% of C++ online submissions for Longest Common Prefix

class Solution {
public:
    int get_lcp(string x, string y, int n, int m) {
        int cnt = 0;
        
        for (int i = 0; i < min(n, m); i++)
            if (x[i] == y[i]) cnt++;
            else break;
        
        return cnt;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1)
            return strs[0];
        
        const int INF = numeric_limits<int>::max();
        int idx = INF;
        
        for (int i = 1; i < strs.size(); i++) { 
            int lcp = get_lcp(strs[i-1], strs[i], strs[i-1].length(), strs[i].length());
            if (lcp == 0) return "";
            else idx = min(idx, lcp);
        }
        
        return (idx == INF ? "" : strs[0].substr(0, idx));
    }
};
