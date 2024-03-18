// https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/description/

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        //sort(p.begin(),p.end());
        sort(p.begin(), p.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        int arr=1;
        int end= p[0][1]; 
        for (int i=1;i<p.size();i++)
        {
            if(p[i][0]>end)
            {
                arr++;
                end=p[i][1];
            }
        } 
        return arr;
    }
};
