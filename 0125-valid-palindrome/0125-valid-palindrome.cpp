class Solution {
public:
    bool isPalindrome(string s) {
   string temp = "";
        for (char c : s) {
            if (isalnum(c)) {
                temp += tolower(c);
            }
        }
        int left = 0, right = temp.size() - 1;
        while (left < right) {
            if (temp[left] != temp[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};