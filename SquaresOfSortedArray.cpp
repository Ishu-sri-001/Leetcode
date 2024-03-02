// https://leetcode.com/problems/squares-of-a-sorted-array/description/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& n) {
        int len=n.size();
        vector<int>ans(len);
        for (int i=0;i<len;i++)
            n[i]*=n[i];
        int i=len-1;
        int l=0,r=len-1;
        while(l<=r)
        {
            if(n[l]>n[r])
                ans[i--]=n[l++];
            else 
                ans[i--]=n[r--];
        }
        return ans;
    }
};
