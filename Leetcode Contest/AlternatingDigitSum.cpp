class Solution {
public:
    int alternateDigitSum(int n) {
        int l=0;
        int num=n;
        int sum=0;
        int len=0;
        while(num>0)
        {
            l++;
            num=num/10;
        }
        if (l%2!=0)
        {
            while(len<l)
            {
                int d=n%10;
                if (len%2==0)
                {
                   sum=sum+d;
                }
                else if (len%2==1)
                    sum=sum-d;
                len++;
                n=n/10;
            }
        }
        else if (l%2==0)
        {
             while (len<l)
             {
                int d=n%10;
                if (len%2==0)
                {
                     sum=sum-d;
                }
                else if (len%2==1)
                    sum=sum+d;
                len++;
                n=n/10;
             }
        }
        return sum;
    }
};
