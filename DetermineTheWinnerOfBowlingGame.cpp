// https://leetcode.com/problems/determine-the-winner-of-a-bowling-game/description/

class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {
        long s1=0,s2=0;
        if (p1.size()==1)
        {
            if(p1[0]==p2[0])
                return 0;
            return p1[0]>p2[0]?1:2;
        }
        for (int i=0;i<p1.size();i++)
        {
            if(i>=2)
            {
                if(p1[i-1]==10 || p1[i-2]==10)
                    s1=s1+p1[i];
            }
            if(i==1 && p1[i-1]==10)
                s1=s1+p1[i];
            s1=s1+p1[i];
        }
         for (int i=0;i<p2.size();i++)
        {
            if(i>=2)
            {
                if(p2[i-1]==10 || p2[i-2]==10)
                    s2=s2+p2[i];
            }
            if(i==1 && p2[i-1]==10)
                s2=s2+p2[i];
            s2=s2+p2[i];
        }
        if (s1==s2)
            return 0;
        return s1>s2?1:2;
    }
};
