class Solution {
public:
    int myAtoi(string s) {
         int i = 0, n = s.size(), sign = 1;
        long long ans = 0;
        bool set = true;

        // Ignore leading whitespaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Check the sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '+') ? 1 : -1;
            i++;
        }

        // Convert the digits
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            ans = ans * 10 + (s[i] - '0');
            if (sign == 1 && ans > INT_MAX) {
                return INT_MAX;
            }
            if (sign == -1 && -ans < INT_MIN) {
                return INT_MIN;
            }
            i++;
        }

        ans *= sign;
        return (int)ans;
    }
};