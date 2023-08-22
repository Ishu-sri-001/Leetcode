// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

class Solution {
public:
    bool check(vector<int>& n) {
        int c=0;
        for (int i=0;i<n.size()-1;i++)
        {
            if(n[i]>n[i+1])
                c++;
        }
        if(n[n.size()-1]>n[0])
            c++;
        return c<=1;
    }
};
