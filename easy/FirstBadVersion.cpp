// runtime: 0ms, faster than 100% of C++ online submissions for First Bad Version
// memory usage: 5.8MB, less than 68.73% of C++ online submissions for First Bad Version

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n;
        
        while (l < r) {
            int m = l + ((r-l) / 2);
            
            if (isBadVersion(m)) r = m;
            else l = m+1;
        }
    
        return l;        
    }
};
