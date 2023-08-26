// https://leetcode.com/problems/set-matrix-zeroes/description/

class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {

        vector<bool>zr(m.size(),false);
        vector<int>zc(m[0].size(),false);
        
        for (int i=0;i<m.size();i++)
        {
            for (int j=0;j<m[i].size();j++)
            {
                if(m[i][j]==0)
                {
                    zr[i]=true;
                    zc[j]=true;
                }
            }
        }

        for (int i=0;i<m.size();i++)
        {
            for (int j=0;j<m[i].size();j++)
            {
                if(zr[i] || zc[j])
                    m[i][j]=0;
            }
        }
    }
};
