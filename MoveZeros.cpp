// https://leetcode.com/problems/move-zeroes/description/

class Solution {
public:
    void moveZeroes(vector<int>& n) {
        int c=0;
        for (int i=0;i<n.size();i++)
        {
            if(n[i]!=0)
            {
                n[c]=n[i];
                c++;
            }
        }
        while(c< n.size())
        {
            n[c]=0;
            c++;
        }
    }
};
