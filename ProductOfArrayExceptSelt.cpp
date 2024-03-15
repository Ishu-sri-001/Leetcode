// https://leetcode.com/problems/product-of-array-except-self/description/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        int l=n.size();
        vector<int>ans(l);
        vector<int>left(l,1);
        vector<int>right(l,1);
        left[0]=1;
        for(int i=1;i<l;i++)
            left[i]=left[i-1]*n[i-1];
        right[l-1]=1;
        for(int i=l-2;i>=0;i--)
            right[i]=right[i+1]*n[i+1];
        for (int i=0;i<l;i++)
            ans[i]=left[i]*right[i];
        return ans;
    }
};
