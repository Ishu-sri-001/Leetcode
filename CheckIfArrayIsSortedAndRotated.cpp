// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

class Solution {
public:
    bool check(vector<int>& n) {
        int t;
        int c=0;
        vector<int>ch;
        for (int i=0;i<n.size()-1;i++)
        {
            ch.push_back(n[i]);
            if(n[i]>n[i+1] && c==0)
            {
                t=i+1;
                c++;
            }
        }
        ch.push_back(n[n.size()-1]);
        sort(ch.begin(),ch.end());
        for (int i=0;i<ch.size();i++)
        {
            if(n[(i+t)%n.size()]!=ch[i])
                return false;
        }
        return true;
    }
};
