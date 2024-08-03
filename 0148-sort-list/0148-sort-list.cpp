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
    ListNode* converttoll(vector<int> &v){
        ListNode* head = new ListNode(v[0]);
        ListNode* mover = head;
        for(int i = 1; i < v.size(); i++){
            ListNode* newnode = new ListNode(v[i]);
            mover->next = newnode;
            mover = newnode;
        }
        return head;
    }
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* temp = head;
        vector<int> v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        sort(v.begin(),v.end());
        
        return converttoll(v); 
    }
};