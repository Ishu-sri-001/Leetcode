// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        int i=0;
        for (auto e:n)
        {
            if(i==0 || i==1 || n[i-2]!=e)
            {
                n[i]=e;
                i++;
            }
        }
        return i;
    }
};
