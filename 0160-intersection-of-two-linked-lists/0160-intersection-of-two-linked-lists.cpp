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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> mpp;
        
        ListNode* temp = headA;
        while(temp!=NULL){
            mpp[temp]++;
            temp = temp->next;
        }
        
        ListNode* tempb = headB;
        while(tempb!=NULL){
            if(mpp.find(tempb) != mpp.end()){
                return tempb;
                break;
            }
            tempb= tempb->next;
        }
        return 0;
        
        
    }
};