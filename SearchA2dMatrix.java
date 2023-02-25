class Solution {
    public boolean searchMatrix(int[][] m, int t) {
        HashSet<Integer>set=new HashSet<>();
        for (int i=0;i<m.length;i++)
        {
            for (int j=0;j<m[i].length;j++)
            {
                set.add(m[i][j]);
            }
        }
        if (set.contains(t))
            return true;
        return false;
    }
}
