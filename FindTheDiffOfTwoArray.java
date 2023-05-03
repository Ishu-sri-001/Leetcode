// https://leetcode.com/problems/find-the-difference-of-two-arrays/description/

class Solution {
    public List<List<Integer>> findDifference(int[] n1, int[] n2) {
        List<List<Integer>> ans = new ArrayList<List<Integer>>();
        List<Integer> a1 = new ArrayList<Integer>();
        List<Integer> a2 = new ArrayList<Integer>();
        HashSet<Integer> s1= new HashSet<>();
        HashSet<Integer> s2= new HashSet<>();
        for (int i=0;i<n1.length;i++)
        {
            s1.add(n1[i]);              
        }

        for (int i=0;i<n2.length;i++)
        {
            s2.add(n2[i]);
        }
        for (int n : s1)
        {
             if(s2.contains(n) == false)
                a2.add(n);
        }
        for (int n : s2)
        {
             if(s1.contains(n) == false)
                a1.add(n);
        }
        ans.add(a2);
        ans.add(a1);
        return ans;
    }
}
