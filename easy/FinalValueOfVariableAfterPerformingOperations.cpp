// runtime: 7ms, faster than 87.28% of C++ online submissions for Final Value of Variable After Performing Operations
// memory usage: 14MB, less than 57.59% of C++ online submissions for Final Value of Variable After Performing Operations

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = 0;
        
        for (auto op: operations) 
            if (op == "++X" || op == "X++") n++;
            else n--;
        
        return n;
    }
};
