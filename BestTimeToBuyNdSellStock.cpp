class Solution {
public:
    int maxProfit(vector<int>& p) {
        int s=INT_MAX;
        int df=0;
        int ans=0;
        for (int i=0;i<p.size();i++)
        {
           if(p[i]<s)
                s=p[i];
            df=p[i]-s;
            if (df>ans)
                ans=df;
        }
        return ans;
    }
};
