// https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/

class Solution {
public:
    int minDifference(vector<int>& n) {
        sort(n.begin(),n.end());
        int ans=INT_MAX;
        int len=n.size();
        if(len<=4)
            return 0;
        ans=min(ans,n[len-4]-n[0]);
        ans=min(ans,n[len-1]-n[3]);
        ans=min(ans,n[len-3]-n[1]);
        ans=min(ans,n[len-2]-n[2]);
        return ans;
    }
};
