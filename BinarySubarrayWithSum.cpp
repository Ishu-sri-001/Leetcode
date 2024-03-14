// https://leetcode.com/problems/binary-subarrays-with-sum/description/

class Solution {
public:
    int numSubarraysWithSum(vector<int>& n, int goal) {
        int ans=0;
        int sum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for (int i:n)
        {
            sum+=i;
            if(sum>=goal)
                ans+=mp[sum-goal];
            mp[sum]++;
        }
        return ans;
    }
};
