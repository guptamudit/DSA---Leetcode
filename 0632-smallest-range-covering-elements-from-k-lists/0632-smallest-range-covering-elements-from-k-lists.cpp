class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int k = nums.size();
int s = 0;

vector<pair<int,int>> a;

// Flatten the 2D vector into a 1D vector of pairs (value, index of the original array)
for(int i = 0; i < k; i++) {
    for(int j = 0; j < nums[i].size(); j++) {
        a.push_back({nums[i][j], i});
    }
}

// Sort the flattened array based on the values
sort(a.begin(), a.end());

vector<int> group(k, 0);
queue<pair<int,int>> q;
int eff = 0;
int aa = 0; // initialize `aa` to a larger value
int b = 0; // initialize `b` to a larger value
int diff=INT_MAX;
for(int i = 0; i < a.size(); i++) {
    group[a[i].second]++;
    if(group[a[i].second] == 1) {
        eff++;
    }
    q.push(a[i]);

    // Ensure the queue only contains distinct elements from each group
    while(!q.empty() && group[q.front().second] > 1) {
        group[q.front().second]--;
        q.pop();
    }

    // Once we have at least one element from each group
    if(eff == k) {
        if(diff > a[i].first - q.front().first) {
            aa = q.front().first;
            b = a[i].first;
            diff=b-aa;
        }
    }
}

return {aa, b};

    }
};