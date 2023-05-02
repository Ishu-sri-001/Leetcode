// https://leetcode.com/problems/sign-of-the-product-of-an-array/

class Solution {
public:
    int arraySign(vector<int>& n) {
        long c=0;
        for (int i=0;i<n.size();i++)
        {
            if(n[i]<0)
                c++;
            if (n[i]==0)
                return 0;
        }
        if (c%2==0)
            return 1;
        return -1;
    }
};
