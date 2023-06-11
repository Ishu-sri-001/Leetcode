// https://leetcode.com/problems/neither-minimum-nor-maximum/

class Solution {
public:
    int findNonMinOrMax(vector<int>& n) {
        if(n.size()==2|| n.size()==1)
            return -1;
        sort(n.begin(),n.end());
        return n[1];
    }
};
