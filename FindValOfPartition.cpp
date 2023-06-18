// https://leetcode.com/problems/find-the-value-of-the-partition/description/

class Solution {
public:
    int findValueOfPartition(vector<int>& n) {
        int m=INT_MAX;
        sort(n.begin(),n.end());
        for (int i=0;i<n.size()-1;i++)
        {
            if( abs(n[i+1]-n[i])<m )
                m=abs(n[i+1]-n[i]);
        }
        return m;
    }
};
