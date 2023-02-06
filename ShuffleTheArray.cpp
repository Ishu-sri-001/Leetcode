class Solution {
public:
    vector<int> shuffle(vector<int>& no, int n) {
        vector<int>c;
        for (int i=0,j=n;i<n-1,j<2*n;i++,j++)
        {
                c.push_back(no[i]);
                c.push_back(no[j]);
        }
        return c;
    }
};
