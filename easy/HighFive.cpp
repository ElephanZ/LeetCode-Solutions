class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        map<int, priority_queue<int>> ranking;
        
        for (auto item: items)
            ranking[item[0]].push(item[1]);
        
        vector<vector<int>> res;
        
        for (auto student: ranking) {
            int sum = 0;
            
            for (int i = 0; i < 5; i++) {
                sum += student.second.top();
                student.second.pop();
            }
               
            res.push_back({student.first, sum/5});
        }
        
        return res;
    }
};
