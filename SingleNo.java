// https://leetcode.com/problems/single-number/description/

class Solution {
    public int singleNumber(int[] n) {
        HashSet<Integer>set=new HashSet<>();
        for (int i=0;i<n.length;i++)
        {
            if(!set.contains(n[i]))
                set.add(n[i]);
            else 
                set.remove(n[i]);
        }
        return set.iterator().next();
    }
}
