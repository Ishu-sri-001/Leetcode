// https://leetcode.com/problems/matrix-diagonal-sum/description/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& m) {
        int s=0;
        for (int i=0;i<m.size();i++)
        {
            for (int j=0;j<m[i].size();j++)
            {
                if (i==j || ((i+j)==m.size()-1))
                    s=s+m[i][j];
            }
        }
        return s;
    }
};
