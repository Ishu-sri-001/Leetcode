// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/description/

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& a) {
        sort(a.begin(),a.end());
        if (a.size()==1)
            return true;
        int d=abs(a[1]-a[0]);
        for (int i=0;i<a.size()-1;i++)
        {
            if(abs(a[i+1]-a[i])!=d)
                return false;
        }
        return true;
    }
};
