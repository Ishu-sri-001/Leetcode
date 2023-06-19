// https://leetcode.com/problems/find-the-highest-altitude/

class Solution {
public:
    int largestAltitude(vector<int>& g) {
        vector<int>a;
        int s=0;
        a.push_back(s);
        for (int i=0;i<g.size();i++)
        {
            s=s+g[i];
            a.push_back(s);
        }
        sort(a.begin(),a.end());
        return a[a.size()-1];
    }
};
