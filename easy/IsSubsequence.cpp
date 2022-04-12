// runtime: 0ms, faster than 100% of C++ online submissions for Is Subsequence
// memory usage: 6.8MB, less than 13.55% of C++ online submissions for Is Subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.length(), m = s.length();
        int last_pos = -1, counter = 0;
        
        for (int i = 0; i < m; i++) {
            for (int j = last_pos+1; j < n; j++) {
                string subs = t.substr(j);
                size_t pos = subs.find(s[i]);
                
                if (pos >= string::npos)
                    return false;
                                  
                last_pos = pos+j;
                counter++;
                break;
            }
        }
        
        return counter == m;
    }
};
