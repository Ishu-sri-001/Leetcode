// https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits/

class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& n, int k) {
        int sum=0;
        for (int i=0;i<n.size();i++)
        {
            int c=0;
            int copy=i;
            while(copy!=0)
            {
                c+=copy & 1;
                copy>>=1;
            }
            if(c==k)
                sum+=n[i];
        }
        return sum;
    }
};
