// runtime: 33ms, faster than 85.02% of C++ online submissions for Count Common Words With One Occurrence
// memory usage: 17MB, less than 92.39% of C++ online submissions for Count Common Words With One Occurrence

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, pair<int, int>> counters;
        
        for (auto w: words1) {
            if (counters.find(w) == counters.end()) counters.emplace(w, make_pair(1, 0));
            else counters[w].first++;
        }
            
        for (auto w: words2) {
            if (counters.find(w) == counters.end()) continue;
            else counters[w].second++;
        }
        
        int sol = 0;
    
        for (auto c: counters)
            if (c.second.first == 1 && c.second.second == 1)
                sol++;
        
        return sol;
    }
};
