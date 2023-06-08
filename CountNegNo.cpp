// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/

class Solution {
public:
    int countNegatives(vector<vector<int>>& g) {
        int c=0;
        for (int i=0;i<g.size();i++)
        {
            c=c+negC(g[i]);
        }
        return c;
    }
    int negC(vector<int>&a)
    {
        int count=0;
        int s=0,l=a.size()-1;
        while(l>=s)
        {
            int m=s+(l-s)/2;
            if(a[m]>=0)
                s=m+1;
            else if (a[m]<0)
            {
                count+=l-m+1;
                l=m-1;
            }
        }
        return count;
    }
};
