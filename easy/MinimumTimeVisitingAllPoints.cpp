// runtime: 11ms, faster than 53.72% of C++ online submissions for Minimum Time Visiting All Points
// memory usage: 10.2MB, less than 65.55% of C++ online submissions for Minimum Time Visiting All Points

class Solution {
public:  
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int counter = 0;
        int n = points.size();
        
        for (int i = 0; i < n-1; i++) {
            int currentX = points[i][0];
            int currentY = points[i][1];
            
            int targetX = points[i+1][0];
            int targetY = points[i+1][1];
            
            int distX = abs(targetX - currentX);
            int distY = abs(targetY - currentY);
            
            counter += max(distX, distY);
        }
        
        return counter;
    }
};
