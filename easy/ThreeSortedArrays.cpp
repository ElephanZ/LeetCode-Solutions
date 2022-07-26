// runtime: 15ms, faster than 71.87% of C++ online submissions for Three Sorted Arrays
// memory usage: 13.4MB, less than 19.89% of C++ online submissions for Three Sorted Arrays

class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        unordered_set<int> one;
        unordered_set<int> two;
        
        vector<int> res;
        
        for (auto el: arr1)
            one.insert(el);
        
        for (auto el: arr2) 
            if (one.find(el) != one.end())
                two.insert(el);
        
        for (auto el: arr3) 
            if (two.find(el) != two.end())
                res.push_back(el);
        
        return res;
    }
};
