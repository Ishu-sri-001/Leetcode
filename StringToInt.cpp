// https://leetcode.com/problems/string-to-integer-atoi/description/

class Solution {
public:
    int myAtoi(string s) {
        int ans=0,sign=1,i=0;
        while(s[i]==' ')
            i++;
        if(s[i]=='+' || s[i]=='-')
            sign=(s[i++]=='-')?-1:1;
        while(i<s.length() && isdigit(s[i]))
        {
            if(ans>INT_MAX/10 || (ans==INT_MAX/10 && (s[i]-'0')>INT_MAX%10))
                return (sign==1)?INT_MAX:INT_MIN;
            ans=ans*10+(s[i++]-'0');
        }
        return ans*sign;
    }
};
