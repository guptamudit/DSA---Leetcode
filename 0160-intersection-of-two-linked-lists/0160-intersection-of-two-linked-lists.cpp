class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) return nullptr;
        
        ListNode* a = headA;
        ListNode* b = headB;
        
        // Traverse both lists, switching heads when reaching the end
        while (a != b) {
            a = (a == nullptr) ? headB : a->next;
            b = (b == nullptr) ? headA : b->next;
        }
        
        return a; // or b, since a == b
    }
};
