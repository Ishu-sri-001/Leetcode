// https://leetcode.com/problems/minimum-common-value/description/

class Solution {
public:
    int getCommon(vector<int>& n1, vector<int>& n2) {
        int i=0,j=0;
        while(i<n1.size() && j<n2.size())
        {
            if(n1[i]==n2[j])
                return n1[i];
            else if(n1[i]>n2[j])
                j++;
            else
                i++;
        }
        return -1;
    }
};
