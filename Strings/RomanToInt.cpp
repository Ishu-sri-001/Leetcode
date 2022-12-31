class Solution {
public:
    int romanToInt(string s) {
        int l=s.length();
        int sum=0;
        for (int i=l-1;i>=0;i--)
        {
            char ch= s[i];
            switch(ch)
            {
                case 'I':
                sum=sum+1;;
                break;
                case 'V':
                if (i!=0 && s[i-1]=='I')
                sum=sum+3;
                else 
                sum=sum+5;
                break;
                case 'X':
                if (i!=0 && s[i-1]=='I')
                sum=sum+8;
                else 
                sum=sum+10;
                break;
                case 'L':
                if (i!=0 && s[i-1]=='X')  
                sum=sum+30;
                else
                sum=sum+50;
                break;
                case 'C':
                if (i!=0 && s[i-1]=='X')
                sum=sum+80;
                else
                sum=sum+100;
                break;
                case 'D':
                if (i!=0 && s[i-1]=='C')
                sum=sum+300;
                else
                sum=sum+500;
                break;
                case 'M':
                 if (i!=0 && s[i-1]=='C')
                 sum=sum+800;
                 else
                 sum=sum+1000;
                 break;
            }
        }
        return sum;
    }
    
};
