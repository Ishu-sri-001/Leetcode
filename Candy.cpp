// https://leetcode.com/problems/candy/description/

class Solution {
public:
    int candy(vector<int>& r) {
        int n=r.size();
        //int c=n;
        vector<int>c(n,1);
        for (int i=1;i<n;i++)
        {
          if(r[i]>r[i-1])
            c[i]=c[i-1]+1;
        }
        for (int i=n-2;i>=0;i--)
        {
          if(r[i]>r[i+1])
            c[i]=max(c[i],c[i+1]+1);
        }
        int ans=0;
        for (auto i:c)
          ans+=i;
        return ans;
      }
};
