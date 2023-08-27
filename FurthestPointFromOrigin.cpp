// https://leetcode.com/problems/furthest-point-from-origin/description/

class Solution {
public:
    int furthestDistanceFromOrigin(string m) {
        int l=0,r=0,d=0;
        for (int i=0;i<m.length();i++)
        {
            if(m[i]=='L')
                l++;
            else if(m[i]=='R')
                r++;
            else 
                d++;
        }
        int c=0;
        if(l>=r)
            c=(l+d)-r;
        else 
            c=(r+d)-l;
        return c;
    }
};
