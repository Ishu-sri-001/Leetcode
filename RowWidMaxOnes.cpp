class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& m) {
        vector<int>ans;
        int max=0,n;
        int i=0;
        while(i!=m.size())
        {
            int c=0,j=0;
            while(j!=m[i].size())
            {
                if(m[i][j]==1)
                    c++;
                j++;
            }
            if (c>max)
            {
                max=c;  
                n=i;
            }
            i++;
        }
        ans.push_back(n);
        ans.push_back(max);
        return ans;
    }
};
