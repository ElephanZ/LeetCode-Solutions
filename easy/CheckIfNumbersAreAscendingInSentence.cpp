// runtime: 0ms, faster than 100% of C++ online submissions for Check if Numbers Are Ascending in a Sentence
// memory usage: 6.4MB, less than 38.40% of C++ online submissions for Check if Numbers Are Ascending in a Sentence

class Solution {
public:
    bool isNumeric(char c) {
        return c >= '0' && c <= '9';
    }
    
    bool isNumber(string t) {
        for (auto c: t)
            if (!isNumeric(c))
                return false;
        
        return true;
    }
    
    bool areNumbersAscending(string s) {
        stringstream ss(s);
        string token;
        
        int last = -1;
        
        while (ss >> token) {
            if (isNumber(token)) {
                int num = stoi(token); 
                
                if (num <= last)
                    return false;
                
                last = num;
            }
        }
        
        return true;
    }
};
