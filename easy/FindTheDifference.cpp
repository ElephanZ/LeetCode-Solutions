// runtime: 3ms, faster than 78.38% of C++ online submissions for Find The Difference
// memory usage: 6.5MB, less than 87.91% of C++ online submissions for Find The Difference

class Solution {
public:
    char findTheDifference(string s, string t) {
        int counter_s[26] {0};
        int counter_t[26] {0};
        
        for (auto c: s)
            counter_s[c-97]++;
        for (auto c: t)
            counter_t[c-97]++;
        
        for (int i = 0; i < 26; i++)
            if (counter_s[i] != counter_t[i])
                return (char)(i+97);

        return ' ';
    }
};
