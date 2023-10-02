// https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-i/

class Solution {
public:
    long long maximumTripletValue(vector<int>& n) {
        long long highest= 0;
        long long high_diff=0;
        long long ans=0;
        for (long long i:n)
        {
            ans=max(ans,high_diff*i);
            high_diff=max(high_diff,highest-i);
            highest=max(highest,i);
        }
        return ans;
    }
};
