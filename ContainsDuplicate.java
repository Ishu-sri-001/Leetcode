// https://leetcode.com/problems/contains-duplicate/description/

class Solution {
    public boolean containsDuplicate(int[] n) {
        HashSet<Integer>set=new HashSet<>();
        for (int i=0;i<n.length;i++)
        {
            if(set.contains(n[i]))
                return true;
            set.add(n[i]);
        }
        return false;
    }
}
