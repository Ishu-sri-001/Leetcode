// https://leetcode.com/problems/k-radius-subarray-averages/description/

class Solution {
public:
    vector<int> getAverages(vector<int>& n, int k) {
        int l=n.size();
        vector<int>ans(l,-1);
        int t=(2*k)+1;
        if(l<t)
            return ans;
        if(k==0)
            return n;
        long long int j=0,s=0,avg=0;
        for (int i=0;i<l;i++)
        {
            s=s+n[i];
            if(i-j+1==t)
            {
                avg=s/t;
                ans[i-k]=avg;
                s=s-n[j];
                j++;
            }
        }     
        return ans;
    }
};
