// https://leetcode.com/problems/happy-number/description/

class Solution {
    public boolean isHappy(int n) {
        Set<Integer>s=new HashSet<>();
        while(n!=1 && !s.contains(n))
        {
            s.add(n);
            int sum=0;
            while(n!=0)
            {
                int d=n%10;
                sum=sum+(d*d);
                n=n/10;
            }
            n=sum;
        }
        return n==1;
    }
}
