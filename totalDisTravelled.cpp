// https://leetcode.com/problems/total-distance-traveled/description/

class Solution {
public:
    int distanceTraveled(int main, int ad) {
        int r=0;
        for (int i=1;i<=main;i++)
        {
            if(ad!=0 && i%5==0)
            {
                ad--;
                //r=r+10;
                main++;
            }
                 r=r+10;
        }
        return r;
    }
};
