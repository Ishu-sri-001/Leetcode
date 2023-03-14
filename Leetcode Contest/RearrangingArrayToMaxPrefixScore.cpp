class Solution {
public:
    int maxScore(vector<int>& n) {
        sort(n.begin(),n.end());
        reverse(n.begin(),n.end());
        int c=0;
        long long sum=0;
        for (int i=0;i<n.size();i++)
        {
            sum=sum+n[i];
            if(sum>0)
                c++;
        }
        return c;
    }
};
