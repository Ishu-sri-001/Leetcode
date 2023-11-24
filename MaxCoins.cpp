// https://leetcode.com/problems/maximum-number-of-coins-you-can-get/description/?

class Solution {
public:
    int maxCoins(vector<int>& p) {
        int n=p.size();
        sort(p.begin(),p.end());
        int s=0,i=n/3;
        while(i<n-1)
        {
            s+=p[i];
            i=i+2;
        }
        return s;
    }
};
