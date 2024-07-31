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
       int lengthofLL(ListNode *head)
{
    int cnt = 0;
    ListNode *temp = head;
    while (temp)
    {

        temp = temp->next;
        cnt++;
    }
    return cnt;
}

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k = lengthofLL(head) - n + 1;
        if (head == NULL)
        return head;

    if (k == 1)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    ListNode *temp = head;
    int cnt = 0;
    ListNode *prev = NULL;

    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
    }
};