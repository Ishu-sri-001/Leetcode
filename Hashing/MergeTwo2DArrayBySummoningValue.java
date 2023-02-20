class Solution {
    public int[][] mergeArrays(int[][] n1, int[][] n2) {
        HashMap<Integer,Integer>map=new HashMap<>();
        for (int i=0;i<n1.length;i++)
        {
            int a=n1[i][0];
            int b=n1[i][1];
            map.put(a,b);
            }
        for (int i=0;i<n2.length;i++)
        {
                if(map.containsKey(n2[i][0]))
                    map.put(n2[i][0],map.get(n2[i][0])+n2[i][1]);
                else 
                {
                    int a=n2[i][0];
                    int b=n2[i][1];
                    map.put(a,b);
                }
            }
        int ar[][]= new int[map.size()][2];
        int i=0;
        for(int key : map.keySet()){
            ar[i++] = new int[] {key,map.get(key)};
        }
        Arrays.sort(ar, (a,b) -> a[0]-b[0]);
        return ar;
    }
}
