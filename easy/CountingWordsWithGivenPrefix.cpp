class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        int n = pref.length();
        
        for (auto word: words)
            if (word.substr(0, n) == pref)
                cnt++;
        
        return cnt;
    }
};
