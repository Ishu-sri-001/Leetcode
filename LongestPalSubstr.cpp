// https://leetcode.com/problems/longest-palindromic-substring/description/

class Solution {
public:
    string longestPalindrome(string s) {
        int len=s.length();
        int max=1,st=0;
        //string ans="";
        if(s.length()==0)
            return "";
        if(s.length()==1)
            return s;
        
        for (int i=0;i<len;i++)
        {
            int l=i,r=i;
            while (l>=0 && r<len && s[l]==s[r])
            {
                if((r-l+1)>max)
                {
                    max=r-l+1;
                    st=l;
                }
            l--;
            r++;
            }
            l=i,r=i+1;
            while (l>=0 && r<len && s[l]==s[r])
            {
                if((r-l+1)>max)
                {
                    max=r-l+1;
                    st=l;
                }
            l--;
            r++;
            }
        }
        return s.substr(st,max);
    }
};
