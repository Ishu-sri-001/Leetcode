// https://leetcode.com/problems/valid-palindrome/description/

class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        s.erase(remove_if(s.begin(), s.end(), ::isspace),s.end());
        for (char c : s) {
            if (iswalnum(c)) {
                t += tolower(c);
            }
        }
        for (int i = 0; i < t.length() / 2; i++) {
            if(t[i]!=t[t.length() - i - 1])
                return false;
        }
        return true;
    }
};
