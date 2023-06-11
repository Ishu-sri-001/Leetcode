// https://leetcode.com/problems/container-with-most-water/description/

class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0;
        int s=0;
        int l=h.size()-1;
        while(i<=l)
        {
            int t=(l-i)*min(h[i],h[l]);
            if(t>s)
                s=t;
            if(min(h[i],h[l])==h[i])
                i++;
            else 
                l--;
        }
        return s;
    }
};
