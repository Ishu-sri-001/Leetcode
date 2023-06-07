// https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/description/

class Solution {
public:
    int minFlips(int a, int b, int c) {
        if((a|b)==c)
            return 0;
        int count=0;
        while(c!=0 || a!=0 || b!=0)
        {
            if((c&1)==1 && (a&1)==0 && (b&1)==0)
                count++;
            else if((c&1)==0)
            {
                if((a&1)==1 && (b&1)==1)
                    count=count+2;
                else if((a&1)==1 || (b&1)==1)
                    count++;
            }
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return count;
    }
};
