// https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
       unordered_map<string,vector<string>>mp;
        for (auto i:s)
        {
            string w=i;
            sort(w.begin(),w.end());
            mp[w].push_back(i);
        }
        vector<vector<string>>ans;
        for (auto i:mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
