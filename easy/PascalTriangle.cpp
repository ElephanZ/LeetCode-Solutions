// runtime: 0ms, faster than 100% of C++ online submissions for Pascal's Triangle
// memory usage: 6.4MB, less than 71.30% of C++ online submissions for Pascal's Triangle

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        
        for (int i = 0; i < numRows; i++) {    
            
            if (i == 0) {
                res.push_back({1});
                continue;
            }
            
            res.push_back(vector<int>());
            
            for (int j = 0; j <= i; j++) {
                int val = 1;
                
                if (j != 0 && j != i)
                    val = res[i-1][j] + res[i-1][j-1];
                
                res[i].push_back(val);
            }
        }        
        
        return res;
    }
};
