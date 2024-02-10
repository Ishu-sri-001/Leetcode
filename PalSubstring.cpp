// https://leetcode.com/problems/palindromic-substrings/description/

class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        int ans=0;
        for (int i=0;i<n;i++)
        {
            int even=palC(s,i,i+1);
            int odd=palC(s,i,i);
            ans+=even+odd;
        }
        return ans;
    }
    int palC(string s, int l,int r)
    {
        int c=0;
        while(l>=0 && r<s.length() && s[l]==s[r])
        {
            l--;
            r++;
            c++;
        }
        return c;
    }
};
