// https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/description/

class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        vector<int>t;
        for (int i=0;i<m.size();i++)
        {
            for (int j=0;j<m[i].size();j++)
            {
                t.push_back(m[i][j]);
            }
        }
        sort(t.begin(),t.end());
        return t[k-1];
    }
};
