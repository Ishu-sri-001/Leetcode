// https://leetcode.com/problems/reverse-string-ii/description/

class Solution {
public:
    string reverseStr(string s, int k) {
        int l=s.length();
        string ans="";
        if(k>=l)
            return rev(s);
        int i=0;
        //for (int i=0;i<l;i=2*k)
        while(i<l)
        {
            int len=min(k,l-i);
            string temp=s.substr(i,len);
            ans=ans+rev(temp);
            ans+=s.substr(i+len,min(k,l-(i+len)));
            i+=2*k;
        }
        return ans;
    }
    string rev(string str)
    {
        for (int i=0;i<str.length()/2;i++)
        {
            swap(str[i],str[str.length()-i-1]);
        }
        return str;
    }
};
