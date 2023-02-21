class Solution {
    public int singleNonDuplicate(int[] n) {
       // HashSet<Integer> set= new HashSet<>();
       if(n.length==1)
        return n[0];
        if(n[n.length-1] != n[n.length-2])
            return n[n.length-1];
        for (int i=0;i<n.length-1;i=i+2)
        {
            if(n[i]!=n[i+1])
                return n[i];
        }
        return 0;
    }
}
