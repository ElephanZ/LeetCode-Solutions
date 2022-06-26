// runtime: 14ms, faster than 87.58% of C++ online submissions for Relative Ranks
// memory usage: 10MB, less than 93.72% of C++ online submissions for Relative Ranks

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        
        vector<string> answer(n);
        vector<pair<int, int>> athletes(n);  
        
        for (int i = 0; i < n; i++)
            athletes[i] = make_pair(score[i], i);
        
        sort(athletes.begin(), athletes.end(), greater<pair<int, int> >());
        
        for (int i = 0; i < n; i++) {
            if (i == 0) answer[athletes[i].second] = "Gold Medal";
            else if (i == 1) answer[athletes[i].second] = "Silver Medal";
            else if (i == 2) answer[athletes[i].second] = "Bronze Medal";
            else answer[athletes[i].second] = to_string(i+1);
        }
        
        return answer;
    }
};
