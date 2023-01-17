class Solution {
public:
    int searchInsert(vector<int>& n, int t) {
        for (int i=0;i<n.size();i++)
        {
            if (n[i]==t)
            return i;
        }
        for (int i=0;i<n.size();i++)
        {
            if (n[i]>t)
            return i;
        }
        return n.size();
    }
};
