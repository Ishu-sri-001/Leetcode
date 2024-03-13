// https://leetcode.com/problems/find-the-pivot-integer/description/

class Solution {
public:
    int pivotInteger(int n) {
        long ls=0,rs=0;
        for (int i=1;i<=n;i++)
        {
            ls=i*(i+1)/2;
            rs=(n*(n+1)/2)- (i*(i-1)/2);
            if(ls==rs)
                return i;
        }
        return -1;
    }
};
