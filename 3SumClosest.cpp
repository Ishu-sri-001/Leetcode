// https://leetcode.com/problems/3sum-closest/description/

class Solution {
public:
    int threeSumClosest(vector<int>& n, int t) {
        sort(n.begin(),n.end());
        int ans=0,dif=INT_MAX;
        for (int i=0;i<n.size();i++)
        {
            int l=i+1;
            int r=n.size()-1;
            while(l<r)
            {
                int temp=n[l]+n[r]+n[i];
                if(abs(t-temp)<dif)
                {
                    ans=temp;
                    dif=abs(t-temp);
                }
                if(temp==t)
                    return temp;
                if(temp>t)
                    r--;
                else 
                    l++;
            }
        }
        return ans;
    }
};
