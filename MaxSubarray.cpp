// https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& n) {
        int cs=0,ms=INT_MIN;
        for (int i=0;i<n.size();i++)
        {
            cs=cs+n[i];
            ms=max(ms,cs);
            if(cs<0)
                cs=0;
        }
        return ms;
    }
};
