// https://leetcode.com/problems/container-with-most-water/description/

class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0;
        int s=0;
        int l=h.size()-1;
        while(i<=l)
        {
            int m=min(h[i],h[l]);
            int t=(l-i)*m;
            s=max(s,t);
            if(m==h[i])
                i++;
            else 
                l--;
        }
        return s;
    }
};
