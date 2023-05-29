// https://leetcode.com/problems/missing-number/description/

class Solution {
    public int missingNumber(int[] n) {
        HashSet<Integer>set=new HashSet<>();
        for (int i=0;i<n.length;i++)
        {
            set.add(n[i]);
        }
        for (int i=0;i<=n.length;i++)
        {
            if(!set.contains(i))
                return i;
        }
        return 1;
    }
}
