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
    ListNode* reverse(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;
        
        while(temp!=NULL){
            ListNode* front = temp->next;
            temp->next = prev;
            prev =  temp;
            temp = front;
        }
        return prev;
    }
public:
    ListNode* findKthNode(ListNode* temp, int k){
        k -= 1;
        while(temp != NULL && k > 0){
            k--;
            temp = temp->next;
        }
        return temp;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* prevnode = NULL;
        ListNode* temp = head;
        while(temp != NULL){
            ListNode* kthNode = findKthNode(temp, k);
            if(kthNode == NULL){
                if(prevnode) prevnode->next = temp;
                break;    
            }
            ListNode* nextnode = kthNode->next;
            kthNode->next = NULL;
            reverse(temp);
            if(temp == head){
                head = kthNode;
            }else{
                prevnode->next = kthNode;
            }
            prevnode = temp;
            temp = nextnode;
        }
        return head;
    }
};