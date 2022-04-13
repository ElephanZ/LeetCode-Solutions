// runtime: 0ms, faster than 100% of C++ online submissions for Number of 1 Bits
// memory usage: 6.1MB, less than 48.17% of C++ online submissions for Number of 1 Bits

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int one_counter = 0;
        bitset<32> binary(n); 
        string binary_str = binary.to_string();
        
        for (auto b: binary_str)
            if (b == '1')
                one_counter++;

        return one_counter;
    }
};
