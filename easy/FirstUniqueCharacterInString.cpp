// runtime: 28ms, faster than 79.65% of C++ online submissions for First Unique Character in a String
// memory usage: 10.6MB, less than 91.24% of C++ online submissions for First Unique Character in a String

class Solution {
public:
    int get_index(char c) {
        return c - 97;
    }
    
    int firstUniqChar(string s) {
        pair<int, int> counters[26];
        int n = s.length();
        
        for (int i = 0; i < 26; i++)
            counters[i] = {0, -1};
        
        for (int i = 0; i < n; i++) {
            counters[get_index(s[i])].first++;
            counters[get_index(s[i])].second = i;
        }
            
        for (auto c: s)
            if (counters[get_index(c)].first == 1)
                return counters[get_index(c)].second;
        
        return -1;
    }
};
