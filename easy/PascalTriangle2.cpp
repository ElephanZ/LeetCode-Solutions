// runtime: 0ms, faster than 100% of C++ online submissions for Pascal's Triangle II
// memory usage: 6.6MB, less than 20.09% of C++ online submissions for Pascal's Triangle II

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> res;
        
        for (int i = 0; i <= rowIndex; i++) {
            
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
        
        return res[rowIndex];
    }
};
