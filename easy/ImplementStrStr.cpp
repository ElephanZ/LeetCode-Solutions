// runtime: 0ms, faster than 100% of C++ online submissions for Implement strStr()
// memory usage: 6.3MB, less than 94.27% of C++ online submissions for Implement strStr()

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() > haystack.length())
            return -1;
        
        vector<int> positions;
        
        for (int i = 0; i <= haystack.length() - needle.length(); i++)
            if (haystack[i] == needle[0])
                positions.push_back(i);
        
        for (auto pos: positions)
            if (haystack.substr(pos, needle.length()) == needle)
                return pos;
        
        return -1;
    }
};
