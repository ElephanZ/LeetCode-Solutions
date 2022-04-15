// runtime: 11ms, faster than 68.70% of C++ online submissions for Fixed Point
// memory usage: 10.5MB, less than 65.14% of C++ online submissions for Fixed Point

class Solution {
public:
    int fixedPoint(vector<int>& arr) {
        int n = arr.size();
        
        for (int i = 0; i < n; i++)
            if (i == arr[i])
                return i;
        
        return -1;
    }
};
