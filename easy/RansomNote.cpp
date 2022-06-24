// runtime: 3ms, faster than 99.96% of C++ online submissions for Ransom Note
// memory usage: 8.8MB, less than 73.07% of C++ online submissions for Ransom Note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int counter[26] {0};
        
        for (auto c: magazine)
            counter[c - 'a']++;
        for (auto c: ransomNote)
            counter[c - 'a']--;
        
        for (int i = 0; i < 26; i++)
            if (counter[i] < 0)
                return false;
        
        return true;
    }
};
