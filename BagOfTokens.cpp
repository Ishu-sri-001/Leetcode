// https://leetcode.com/problems/bag-of-tokens/description/

class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int p) {
        int s=0,c=0;
        sort(t.begin(),t.end());
        int left=0, right=t.size()-1;
        while(left<=right)
        {
            if(p>=t[left])
            {
                p-=t[left++];
                c++;
                s=max(c,s);
            }
            else if(c>=1)
            {
                p+=t[right--];
                c--;
                
            }
            else
                break;
        }
        return s;
    }
};
