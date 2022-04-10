// runtime: 0ms, faster than 100% of C++ online submissions for Length of Last Word
// memory usage: 6.8MB, less than 6.28% of C++ online submissions for Length of Last Word

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        
        string word;
        while (ss >> word);
        
        return word.length();
    }
};
