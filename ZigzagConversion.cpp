// https://leetcode.com/problems/zigzag-conversion/description/

class Solution {
public:
    string convert(string s, int n) {
        if(n==1)
            return s;
        vector<string>t(n,"");
        int j=0;
        bool ch=true;
        for (int i=0;i<s.length();i++)
        {
            if(j==n-1)
                ch=false;
            if (j==0)
                ch=true;
            t[j]=t[j]+s[i];
            if(ch)
            {
                j++;
            }
            else 
            {
                j--;
            }
        }
        string ans="";
        for (int i=0;i<t.size();i++)
        {
            ans=ans+t[i];
        }
        return ans;
    }
};
