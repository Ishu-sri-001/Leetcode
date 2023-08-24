// https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& n) {
        vector<int>pos;
        vector<int>neg;
        for (int i=0;i<n.size();i++)
        {
            if(n[i]>0)
                pos.push_back(n[i]);
            else 
                neg.push_back(n[i]);
        }
        int e=0,o=0;
        for (int i=0;i<n.size();i++)
        {
            if(i%2==0)
            {
                n[i]=pos[e++];
            }
            else 
                n[i]=neg[o++];
        }
        return n;
    }
};
