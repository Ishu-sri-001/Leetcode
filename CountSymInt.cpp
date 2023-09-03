// https://leetcode.com/problems/count-symmetric-integers/description/

class Solution {
public:
    int countSymmetricIntegers(int l, int h) {
        int c=0;
        for (int i=l;i<=h;i++)
        {
            if(Sym(i))
                c++;
        }
        return c;
    }
    bool Sym(int n)
    {
        int t=n,c=0;
        while(t!=0)
        {
            c++;
            t=t/10;
        }
        int l=0,r=0,i=0;
        if(c%2!=0)
            return false;
        while(i!=c/2)
        {
            int d=n%10;
            l=l+d;
            n=n/10;
            i++;
        }
        while(i!=c)
        {
            int d=n%10;
            r=r+d;
            n=n/10;
            i++;
        }
        if (l==r)
            return true;
        return false;
    }
};
