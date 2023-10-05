// https://leetcode.com/problems/majority-element-ii/description/

class Solution {
public:
    vector<int> majorityElement(vector<int>& n) {
        unordered_set<int>st;
        vector<int>ans;
        unordered_map<int,int>mp;
        for (int i=0;i<n.size();i++)
        {
            mp[n[i]]++;
        }
        for (int i=0;i<n.size();i++)
        {
            if(mp.find(n[i])!=mp.end())
            {
                int t=mp[n[i]];
                if(t>n.size()/3 )
                    ans.push_back(n[i]);
                mp.erase(n[i]);
            }
            
        }
        return ans;
    }
};
