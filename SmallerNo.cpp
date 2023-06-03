// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& n) {
        vector<int>ans;
        int i=0;
        while(i<n.size())
        {
            int cc=0;
            int t=n[i];
             for (int j=0;j<n.size();j++)
                {
                    if(t>n[j])
                        cc++;
                }
            ans.push_back(cc);
            i++;
        }
       return ans;
    }
};
