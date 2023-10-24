// https://leetcode.com/problems/minimum-sum-of-mountain-triplets-ii/description/

class Solution {
public:
    int minimumSum(vector<int>& n) {
        int ans=INT_MAX;
        vector<int>left(n.size());
        vector<int>right(n.size());
        left[0]=n[0];
        for (int i=1;i<n.size();i++)
            left[i]=min(left[i-1],n[i]);
        right[n.size()-1]=n[n.size()-1];
        for (int i=n.size()-2;i>=0;i--)
            right[i]=min(right[i+1],n[i]);
        for (int i=1;i<n.size()-1;i++)
        {
            if(left[i-1]<n[i] && right[i+1]<n[i])
                ans=min(ans,left[i-1]+n[i]+right[i+1]);
        }
        return ans==INT_MAX?-1:ans;
    }
};
