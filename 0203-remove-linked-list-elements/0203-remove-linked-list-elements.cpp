class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) {
            return head;
        }

        // Remove head node if its value matches val
        while (head != NULL && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        ListNode* temp = head;

        while (temp != NULL && temp->next != NULL) {
            if (temp->next->val == val) {
                ListNode* to_delete = temp->next;
                temp->next = temp->next->next;
                delete to_delete;
            } else {
                temp = temp->next;
            }
        }

        return head;
    }
};
