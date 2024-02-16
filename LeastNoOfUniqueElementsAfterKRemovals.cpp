// https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/description/

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& a, int k) {
        unordered_map<int,int>mp;
        for (int i=0;i<a.size();i++)
            mp[a[i]]++;
        vector<pair<int,int>>t(mp.begin(),mp.end());
        sort(t.begin(),t.end(),[](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second; // Sort by frequency in ascending order
        });
        int c=t.size();
        for (auto it=t.begin();it!=t.end();++it)
        {
            if(k>=it->second)
            {
                k-=it->second;
                c--;
            }
            else 
                break;
        }
        return c;
    }
};
