// https://leetcode.com/problems/sort-array-by-parity/description/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& n) {
        int i=0,j=n.size()-1;
        while(i<j)
        {
            while(i<j && n[i]%2==0)
                i++;
            while(i<j && n[j]%2==1)
                j--;
            swap(n[i],n[j]);
        }
        return n;
    }
};
