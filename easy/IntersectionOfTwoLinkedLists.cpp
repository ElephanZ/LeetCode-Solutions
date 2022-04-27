// runtime: 79ms, faster than 27.53% of C++ online submissions for Intersection of Two Linked Lists
// memory usage: 17MB, less than 16.72% of C++ online submissions for Intersection of Two Linked Lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> nodes;
        
        ListNode *current = headA;
        while (current != nullptr) {
            nodes.insert(current);
            current = current->next;
        }
        
        current = headB;
        while (current != nullptr) {
            if (nodes.find(current) != nodes.end())
                return current;
            
            current = current->next;
        }
        
        return nullptr;
    }
};
