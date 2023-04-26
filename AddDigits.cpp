// https://leetcode.com/problems/add-digits/description/

class Solution {
    public int addDigits(int n) {
        int s=0;
       while(n>0)
       {
           s=s+n%10;
           n=n/10;
       }
       while (s>9)
       {
           n=s;
           s=0;
           while(n>0)
            {
                s=s+n%10;
                n=n/10;
             }
       }
       return s;
    }
}
