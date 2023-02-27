class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& n) {
        vector<int>ls;
        vector<int>rs;
        int s=0;
        for (int i=0;i<n.size();i++)
        {
            int j=0;
            s=0;
            while(j<i)
            {
                s=s+n[j];
                j++;
            }
            ls.push_back(s);
        }
        for (int i=0;i<n.size();i++)
        {
            int k=i+1;
            s=0;
            while(k<n.size())
            {
                s=s+n[k];
                k++;
            }
            rs.push_back(s);
        }
        vector<int>ans;
        for (int i=0;i<ls.size();i++)
        {
            int t=abs(ls[i]-rs[i]);
            ans.push_back(t);
        }
        return ans;
    }
};
