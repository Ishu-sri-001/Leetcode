class Solution {
public:
    int maxDivScore(vector<int>& n, vector<int>& d) {
        int i=0,m=0;
        int temp=INT_MAX;
        while(i<d.size())
        {
            int j=0,c=0;
            while(j<n.size())
            {
                if(n[j]%d[i]==0)
                {
                    c++;
                }
                j++;
            }
             if(c==m){
                temp = min(temp,d[i]);
            }
            if(c>m)
            {
                m=c;
                temp=d[i];
            }
            i++;
        }
        return temp;
    }
};
