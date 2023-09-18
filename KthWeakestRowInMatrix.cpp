// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/description/

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& m, int k) {
        int n=m.size();
        set<pair<int,int>>s;
        for (int i=0;i<n;i++)
        {
            int c=count(m[i].begin(),m[i].end(),1);
            s.insert({c,i});
        }
        vector<int>ans;
        for (auto i:s)
        {
            if(k==0)
                break;
            ans.push_back(i.second);
            k--;
        }
        return ans;
    }
};
