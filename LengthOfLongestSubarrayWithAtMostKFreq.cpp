// https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/description/

class Solution {
public:
    int maxSubarrayLength(vector<int>& n, int k) {
        int ans=0, l=n.size();
        unordered_map<int,int>mp;
        int i=0,j=0;
        while(i<l && j<l)
        {
            mp[n[j]]++;
            while(mp[n[j]]>k)
            {
                mp[n[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
