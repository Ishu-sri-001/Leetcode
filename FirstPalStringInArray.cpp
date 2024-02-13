// https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/

class Solution {
public:
    string firstPalindrome(vector<string>& w) {
        for (auto i:w)
        {
            string t=i;
            reverse(i.begin(),i.end());
            if(t==i)
                return t;
        }
        return "";
    }
};
