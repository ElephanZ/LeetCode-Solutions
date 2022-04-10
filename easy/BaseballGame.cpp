// runtime: 3ms, faster than 86.92% of C++ online submissions for Baseball Game
// memory usage: 8.2MB, less than 95.60% of C++ online submissions for Baseball Game

class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        stack<int> nums;
        
        for (auto operation: ops) {
            
            if (operation == "+") {
                int first = nums.top();
                nums.pop();
                
                int second = nums.top();
                
                nums.push(first);
                nums.push(first + second);
            }
            else if (operation == "D") 
                nums.push(nums.top() * 2);
            else if (operation == "C")
                nums.pop();
            else
                nums.push(stoi(operation));
            
        }
        
        int res = 0;
        while (!nums.empty()) {
            res += nums.top();
            nums.pop();
        }
        
        return res;
    }
};
