class Solution {
public:
    static bool _cmp(vector<int> a, vector<int> b) {
        return a[1] > b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int cnt = 0;
        sort(boxTypes.begin(), boxTypes.end(), _cmp);
        
        for (auto &box : boxTypes) {
            if (truckSize == 0)
                break;
            
            if (truckSize >= box[0]) {
                cnt += box[1] * box[0];
                truckSize -= box[0];
            }           
            else {
                cnt += box[1] * truckSize;
                truckSize = 0;
            }
        }
        
        return cnt;
    }
};
