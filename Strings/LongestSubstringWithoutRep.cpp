class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character>set= new HashSet<>();
        int j = 0,max=0;
        for(int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);        
            while(set.contains(c)) {
                set.remove(s.charAt(j));
                j++;
            }
            set.add(c);
            if(set.size() > max) {
                max = set.size();
            }
        }
        return max;
    }
}
