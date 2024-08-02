class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head == NULL) return head;
        
        map<ListNode*,int> mp;
        
        ListNode* temp = head;
        while(temp!=NULL){
            if(mp.find(temp)!=mp.end()){
                return true;
            }
            mp[temp]++;
            temp= temp->next;
        }
        return false;
    }
};