// https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/

class Solution {
public:
    bool isAcronym(vector<string>& w, string s) {
        if(w.size() !=s.length())
            return false;
        for (int i=0;i<w.size();i++)
        {
            string str=w[i];
            if(str[0] !=s[i])
                return false;
        }
        return true;
    }
};
