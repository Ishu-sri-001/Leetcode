// https://leetcode.com/problems/intersection-of-two-arrays-ii/description/

class Solution {
public:
    vector<int> intersect(vector<int>& n1, vector<int>& n2) {
        unordered_map<int,int>mp;
        for (int i:n1)
        {
            mp[i]++;
        }
        n1.clear();
        for (int i: n2)
        {
            if(mp.find(i)!=mp.end() && mp[i]!=0)
            {
                n1.push_back(i);
                mp[i]--;
            }
        }
        return n1;
    }
};
