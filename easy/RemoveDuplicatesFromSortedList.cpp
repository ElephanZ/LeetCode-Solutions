// runtime: 12ms, faster than 68.34% of C++ online submissions for Remove Duplicates from Sorted List
// memory usage: 11.5MB, less than 80.08% of C++ online submissions for Remove Duplicates from Sorted List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *current = head;
        
        while (current != nullptr && current->next != nullptr) {
            if (current->val != current->next->val) current = current->next;
            else current->next = current->next->next;
        }
        
        return head;
    }
};
