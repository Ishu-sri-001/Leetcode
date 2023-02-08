class Solution {
    public int majorityElement(int[] n) {
      HashMap <Integer,Integer>map= new HashMap<>();
      for (int i=0;i<n.length;i++)
      {
          if (map.containsKey(n[i]))
            map.put(n[i],map.get(n[i])+1);
        else 
            map.put(n[i],1);
      }
      for (int i=0;i<n.length;i++)
      {
          if(map.get(n[i])>(n.length/2))
            return n[i];
      }
      return 0;
    }
}
