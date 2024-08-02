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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // Compute the length of the list
        ListNode* tail = head;
        int len = 1;
        while (tail->next) {
            len++;
            tail = tail->next;
        }

        // If k is a multiple of len, no rotation is needed
        k = k % len;
        if (k == 0) return head;

        // Connect the tail to the head to form a circular list
        tail->next = head;

        // Find the new tail: (len - k) steps from the head
        ListNode* newTail = head;
        for (int i = 0; i < len - k - 1; i++) {
            newTail = newTail->next;
        }

        // The new head is the next of new tail
        ListNode* newHead = newTail->next;
        // Break the circle
        newTail->next = nullptr;

        return newHead;
    }
};
