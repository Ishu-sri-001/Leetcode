// https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/description/

class Solution {
public:
    bool checkString(string s) {
        int c;
        for (int i=0;i<s.length();i++)
        {
            if(s[i]=='b')
            {
                c=i;
                break;
            }
        }
        for (int i=c;i<s.length();i++)
        {
            if(s[i]!='b')
                	return false;
        }
        return true;
    }
};
