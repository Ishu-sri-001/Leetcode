class Solution {
public:
    int diagonalPrime(vector<vector<int>>& n) {
        vector<int>p;
        int l=n.size();
        int i,j;
        for (i=0;i<l;i++)
        {
            if(isPrime(n[i][i]))
                p.push_back(n[i][i]);
            if(isPrime(n[i][l-i-1]))
                p.push_back(n[i][l-i-1]);
        }
        int max=INT_MIN;
        if(p.size()==0)
            return 0;
        for (i=0;i<p.size();i++)
        {
            if (p[i]>max)
                max=p[i];
        }
        return max;
    }
    bool isPrime(int no)
    {
        if (no<=1)
            return false;
        int k;
       for (k=2;k*k<=no;k++)
        {
            if(no%k==0)
                return false;
        }
        return true;
    }
};
