// runtime: 0ms, faster than 100% of C++ online submissions for Remove Vowels from a String
// memory usage: 6.3MB, less than 76.04% of C++ online submissions for Remove Vowels from a String

class Solution {
public:
    string removeVowels(string s) {
        string res = "";
        
        for (auto c: s)
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
                res += c;
        
        return res;
    }
};
