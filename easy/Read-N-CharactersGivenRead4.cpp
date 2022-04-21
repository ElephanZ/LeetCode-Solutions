// runtime: 0ms, faster than 100% of C++ online submissions for Read N Characters Given Read4
// memory usage: 6.4MB, less than 19.61% of C++ online submissions for Read N Characters Given Read4

// The read4 API is defined in the parent class Reader4.
// int read4(char *buf4) reads four consecutive characters from file, then writes those characters into the buffer array buf4

class Solution {
public:
    // @param buf Destination buffer
    // @param n   Number of characters to read
    // @return    The number of actual characters read
    
    int read(char *buf, int n) {
        int counter = 0;
        
        while (n > 0) {
            
            char segment[4];
            int fetch = read4(segment);
            int actual_pos = counter + fetch;
            
            if (fetch == 0)
                break;
            
            for (int i = 0; counter < actual_pos && i < min(4, n); i++)
                buf[counter++] = segment[i];
            
            n -= fetch;
            
        }
        
        return counter;
    }
};
