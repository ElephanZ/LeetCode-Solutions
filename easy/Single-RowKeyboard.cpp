// runtime: 7ms, faster than 71.48% of C++ online submissions for Single-Row Keyboard
// memory usage: 7MB, less than 62.89% of C++ online submissions for Single-Row Keyboard

class Solution {
public:
    int calculateTime(string keyboard, string word) {
        int n = keyboard.length();
        int m = word.length();
        
        unordered_map<char, int> keys;
        
        for (int i = 0; i < n; i++)
            keys.emplace(keyboard[i], i);
        
        int sum = 0;
        int i = 0;
        
        for (int j = 0; j < m; j++) {
            sum += abs(i - keys[word[j]]);
            i = keys[word[j]];            
        }
        
        return sum;
    }
};
