// runtime: 12ms, faster than 46.28% of C++ online submissions for Merge Two Sorted Lists
// memory usage: 14.6MB, less than 98.03% of C++ online submissions for Merge Two Sorted Lists

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr && list2 == nullptr)
            return nullptr;
        
        if (list1 == nullptr)
            return list2;
        
        if (list2 == nullptr)
            return list1;
        
        if (list1->val < list2->val) {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};
