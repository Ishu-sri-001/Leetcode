// https://leetcode.com/problems/find-the-town-judge/description/

class Solution {
    public int findJudge(int n, int[][] t) {
        HashMap<Integer,Integer>map= new HashMap<>();
        int k=-1;
        if(n==1)
            return 1;
        if((n!=1) && t==null)
            return -1;
        for (int i=0;i<t.length;i++)
        {
            if(map.containsKey(t[i][1]))
                map.put(t[i][1],map.get(t[i][1])+1);
            else 
                map.put(t[i][1],1);
        }

        for (Map.Entry<Integer, Integer> e:map.entrySet()) 
        {
            if(e.getValue()==n-1)
                k=e.getKey();
        } 
        for (int i=0;i<t.length;i++)
        {
            if(t[i][0]==k)
                return -1;
        }
        return k;
    }
}
