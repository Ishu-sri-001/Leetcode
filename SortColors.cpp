// https://leetcode.com/problems/sort-colors/description/

class Solution {
public:
    void sortColors(vector<int>& n) {
        int l=0,m=0,h=n.size()-1;
        while(m<=h)
        {
            if(n[m]==0)
            {
                swap(n[l],n[m]);
                l++;
                m++;
            }
            else if(n[m]==1)
                m++;
            else 
            {
                swap(n[h],n[m]);
                h--;
            }
        }
    }
};
