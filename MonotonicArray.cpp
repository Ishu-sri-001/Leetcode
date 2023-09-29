// https://leetcode.com/problems/monotonic-array/description/

class Solution {
public:
    bool isMonotonic(vector<int>& n) {
        if(n.size()==1 || n.size()==2)
            return true;
        if(n[0]<=n[n.size()-1])
        {
            for (int i=0;i<n.size()-1;i++)
            {
                if(n[i]>n[i+1])
                    return false;
            }
        }
        else 
        {
            for (int i=n.size()-1;i>0;i--)
            {
                if(n[i]>n[i-1])
                    return false;
            }
        }
        return true;
    }
};
