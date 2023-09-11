// https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/description/?envType=daily-question&envId=2023-09-11

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gs) {
        vector<vector<int>>ans;
        unordered_map<int,vector<int>>mp;
        for (int i=0;i<gs.size();i++)
        {
            mp[gs[i]].push_back(i);
            if(mp[gs[i]].size()==gs[i])
            {
                ans.push_back(mp[gs[i]]);
                mp[gs[i]].clear();
            }
        }
        return ans;
    }
};
