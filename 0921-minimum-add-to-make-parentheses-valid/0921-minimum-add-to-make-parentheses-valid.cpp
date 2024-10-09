class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0, close = 0;
        for (auto itr : s) {
            if (itr == '(') {
                open++;  // Increase open count for unmatched '('
            } else if (itr == ')') {
                if (open > 0) {
                    open--;  // Match a '(' with ')'
                } else {
                    close++;  // No '(' to match, count ')' as unmatched
                }
            }
        }
        // Total additions needed are unmatched open + unmatched close
        return open + close;
    }
};
