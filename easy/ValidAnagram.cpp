// runtime: 8ms, faster than 80.34% of C++ online submissions for Valid Anagram
// memory usage: 7.4MB, less than 45.98% of C++ online submissions for Valid Anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        short counter_s[26] {0};
        short counter_t[26] {0};
        
        int n = s.length(), m = t.length();
        if (n != m) return false;
        
        for (int i = 0; i < n; i++)
            counter_s[s[i] - 97]++, counter_t[t[i] - 97]++;
        
        for (int i = 0; i < 26; i++)
            if (counter_s[i] != counter_t[i])
                return false;
        
        return true;
    }
};
