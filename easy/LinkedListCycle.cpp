// runtime: 11ms, faster than 78.84% of C++ online submissions for Linked List Cycle
// memory usage: 10.5MB, less than 12.42% of C++ online submissions for Linked List Cycle

class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode *> visited;
        
        while (head != nullptr) {
            if (visited.find(head) != visited.end())
                return true;
            
            visited.insert(head);
            head = head->next;
        }
            
        return false;
    }
};
