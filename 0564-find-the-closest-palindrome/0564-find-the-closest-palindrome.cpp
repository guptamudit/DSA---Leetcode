class Solution {
public:
    string nearestPalindromic(string n) {
        long long num = stoll(n);
        if (num <= 10) return to_string(num - 1);  
        if (num == 11) return "9";  
        
        vector<long long> candidates = getCandidates(n);
        long long closest = LLONG_MAX;
        long long minDiff = LLONG_MAX;
        
        for (long long candidate : candidates) {
            if (candidate == num) continue;
            long long diff = abs(candidate - num);
            if (diff < minDiff || (diff == minDiff && candidate < closest)) {
                closest = candidate;
                minDiff = diff;
            }
        }
        
        return to_string(closest);
    }
    
private:
    vector<long long> getCandidates(string& n) {
        int len = n.length();
        vector<long long> candidates;
        
        candidates.push_back(pow(10, len - 1) - 1);  
        
        candidates.push_back(pow(10, len) + 1);
        
        long long prefix = stoll(n.substr(0, (len + 1) / 2));
        
        for (int i = -1; i <= 1; i++) {
            string prefixStr = to_string(prefix + i);
            string candidate = prefixStr;
            if (len % 2 == 0) {
                candidate += string(prefixStr.rbegin(), prefixStr.rend());
            } else {
                candidate += string(prefixStr.rbegin() + 1, prefixStr.rend());
            }
            candidates.push_back(stoll(candidate));
        }
        
        return candidates;
    }
};