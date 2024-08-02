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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            // If the list is empty or has only one node, return NULL.
            return NULL;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        
        // Use fast and slow pointers to find the middle node.
        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if (prev == head && head->next->next == NULL) {
            // If the list has exactly two nodes, delete the second node.
            head->next = NULL;
            delete slow;
        } else {
            // Remove the middle node.
            prev->next = slow->next;
            delete slow;
        }
        
        return head;
    }
};
