// runtime: 83ms, faster than 90.88% of C++ online submissions for Minimum Index Sum of Two Lists
// memory usage: 36.8MB, less than 58.99% of C++ online submissions for Minimum Index Sum of Two Lists

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> resturants;
        int n = list1.size();
        int m = list2.size();
        
        for (int i = 0; i < n; i++)
            resturants.emplace(list1[i], i);
        
        int minimum = numeric_limits<int>::max();
        vector<string> res;
        
        for (int i = 0; i < m; i++) {
            if (resturants.find(list2[i]) != resturants.end()) {
                
                int delta = i + resturants[list2[i]];
                
                if (delta == minimum) 
                    res.push_back(list2[i]);
                
                else if (delta < minimum) {
                    minimum = delta;
                    res.clear();
                    res.push_back(list2[i]);
                }
                
            }
        }
        
        return res;
    }
};
