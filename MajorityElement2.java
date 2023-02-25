class Solution {
    public List<Integer> majorityElement(int[] n) {
      HashMap <Integer,Integer>map= new HashMap<>();
      HashSet <Integer>set=new HashSet<>();
      //List<Integer> lt=new ArrayList<Integer>(); 
      for (int i=0;i<n.length;i++)
      {
          if (map.containsKey(n[i]))
            map.put(n[i],map.get(n[i])+1);
        else 
            map.put(n[i],1);
      }
      for (int i=0;i<n.length;i++)
      {
          if(map.get(n[i])>(n.length/3))
            set.add(n[i]);
      }
       ArrayList<Integer> lt= new ArrayList<>(set);
      return lt;
    }
}
