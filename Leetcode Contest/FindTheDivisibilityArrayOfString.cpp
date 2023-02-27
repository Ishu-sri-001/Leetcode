class Solution {
public:
    vector<int> divisibilityArray(string w, int m) {
        vector<int>no;
        for (int i=0;i<w.size();i++)
        {
            char ch=w[i];
            int n= ch-'0';
            no.push_back(n);
        }
        vector<int>ans;
       // reverse(no.begin(),no.end());
        long long int t=0;
        for (int i=0;i<no.size();i++)
        {
            t=(t*10ll)+no[i];
            if(t%m==0)
            {
                ans.push_back(1);
                t=0;
            }
            else {
                ans.push_back(0);
                t=t%m;
            }
        }
        return ans;
    }
};
