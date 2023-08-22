// https://leetcode.com/problems/rotate-array/description/

class Solution {
public:
    void rotate(vector<int>& n, int k) {
        vector<int>t;
        for (int i=0;i<n.size();i++)
        {
            t.push_back(n[i]);
        }
        for(int i=0;i<n.size();i++)
        {
            n[(i+k)%n.size()]=t[i];
        }
    }
};
