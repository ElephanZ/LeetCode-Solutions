// runtime: 0ms, faster than 100% of C++ online submissions for Last Stone Weight
// memory usage: 7.7MB, less than 33.25% of C++ online submissions for Last Stone Weight

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if (stones.size() == 1)
            return stones[0];
        
        priority_queue<int> pq;
        
        for (auto stone: stones) 
            pq.push(stone);

        while (!pq.empty()) {
            int y = pq.top();
            pq.pop();
            
            if (pq.empty())
                return y;
            
            int x = pq.top();
            pq.pop();
            
            if (x != y)
                pq.push(y - x);
        }
        
        return 0;
    }
};
