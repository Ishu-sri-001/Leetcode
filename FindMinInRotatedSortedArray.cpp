// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

class Solution {
public:
    int findMin(vector<int>& n) {
        sort(n.begin(),n.end());
        return n[0];
    }
};
