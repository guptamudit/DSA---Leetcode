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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL && list2 == NULL) return list1;
        vector<int> v;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        
        while(temp1!=NULL){
            v.push_back(temp1->val);
            temp1 = temp1->next;
        }
        while(temp2!=NULL){
            v.push_back(temp2->val);
            temp2 = temp2->next;
        }
        sort(v.begin(),v.end());
        
        ListNode* head = new ListNode(v[0]);
        ListNode* mover = head;
        for(int it = 1; it < v.size();it++ ){
            ListNode* temp = new ListNode(v[it]);
            mover  -> next = temp;
            mover = temp;
        }
        return head;
    }
};