class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if (head == NULL) return head;

        unordered_map<int, int> mp;
        for (int it : nums) {
            mp[it]++;
        }

        ListNode* temp = head;
        ListNode* prev = NULL;

        while (temp != NULL) {
            if (mp.find(temp->val) != mp.end()) {
                
                if (prev == NULL) {
                    head = temp->next;
                } else {
                    prev->next = temp->next;
                }
                ListNode* dummy = temp;
                temp = temp->next;
                delete(dummy);
            } else {
                prev = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};