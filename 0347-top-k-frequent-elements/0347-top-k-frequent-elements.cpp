class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        priority_queue<pair<int, int>> pq; // max heap based on frequency
        vector<int> ans;

        // Count the frequency of each element
        for (int num : nums) {
            freq[num]++;
        }

        // Push all elements and their frequencies into the max heap
        for (auto& it : freq) {
            pq.push({it.second, it.first}); // {frequency, num}
        }

        // Extract the top k frequent elements
        while (k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
