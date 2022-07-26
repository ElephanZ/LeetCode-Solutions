// runtime: 7ms, faster than 99.24% of C++ online submissions for Destination City
// memory usage: 11.7MB, less than 12.66% of C++ online submissions for Destination City

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n = paths.size();
        unordered_map<string, bool> cities;
        
        for (auto path: paths) {
            cities.emplace(path[1], false);
            cities[path[0]] = true;
        }
        
        for (auto city: cities)
            if (!city.second)
                return city.first;
        
        return "";
    }
};
