/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL) return NULL;  
        
        map<ListNode*,int> mp;
        
        ListNode* temp = head;
        int index = 0;  // Index to keep track of the current position in the list
        
        while(temp != NULL){
            if(mp.find(temp) != mp.end()){
                return temp;   //return the node
            }
            mp[temp] = index;
            temp = temp->next;
            index++;
        }
        return NULL; 
        
    }
};