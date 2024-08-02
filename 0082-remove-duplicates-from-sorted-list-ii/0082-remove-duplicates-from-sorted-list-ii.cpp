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
        unordered_map<int, int> mp;
        ListNode* temp = head;
        //indert values in the map
        while(temp!=NULL){
            mp[temp->val]++;
            temp = temp->next;
        }
        
        ListNode* dummy = new ListNode();
        dummy->next = head;
        temp = dummy;
        while(temp->next != NULL){
            if(mp[temp->next->val] > 1){
                temp->next = temp->next->next;
            }
            else{
                temp = temp->next;
            }
        }
        return dummy->next;
    }
};