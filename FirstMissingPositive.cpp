// https://leetcode.com/problems/first-missing-positive/description/

class Solution {
public:
    int firstMissingPositive(vector<int>& n) {
        sort(n.begin(),n.end());
        unordered_set<int>mp;
        int high=n[n.size()-1];
        for (int i=0;i<n.size();i++)
        {
            if(n[i]>0)
                mp.insert(n[i]);
        }
        for (int i=1;i<high;i++)
        {
            if(mp.find(i)==mp.end())
                return i;
        }
        if(high<=0)
            return 1;
        return high+1;
    }
};
