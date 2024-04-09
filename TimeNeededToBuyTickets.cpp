// https://leetcode.com/problems/time-needed-to-buy-tickets/description/

class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int min=t[k];
        int ans=min;
        for(int i=0;i<t.size();i++)
        {
            if(i<k)
                ans+=t[i]<min ? t[i]: min;
            else if(k<i)
                ans+=t[i]<min ? t[i]: min-1;
        }
        return ans;
    }
};
