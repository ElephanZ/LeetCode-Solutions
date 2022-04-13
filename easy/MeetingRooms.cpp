// runtime: 15ms, faster than 94.04% of C++ online submissions for Meeting Rooms
// memory usage: 11.8MB, less than 45.90% of C++ online submissions for Meeting Rooms

class Solution {
public:
    static bool cmp(const vector<int> &first, const vector<int> &second) {
        return first[0] < second[0];
    }
    
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        
        int n = intervals.size();
        
        for (int i = 1; i < n; i++)
            if (intervals[i][0] < intervals[i-1][1])
                return false;
        
        return true;
    }
};
