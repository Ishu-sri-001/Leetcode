// https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/description/

class Solution {
public:
    bool winnerOfGame(string c) {
        int al=0,bo=0;
        for (int i=0;i<c.size();i++)
        {
            int a=0,b=0;
            while(c[i]=='A' && i<c.size())
            {
                a++;
                i++;
            }
            if(a>2)
                al+=a-2;
            while(c[i]=='B' && i<c.size())
            {
                b++;
                i++;
            }
            if(b>2)
            {
                bo+=b-2;
            }
            if(a!=0 || b!=0)
                i--;
        }
        return al>bo;
    }
};
