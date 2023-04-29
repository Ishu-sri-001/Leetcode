// https://leetcode.com/problems/longest-common-prefix/description/

class Solution {
    public String longestCommonPrefix(String[] s) {
            Arrays.sort(s);
            String s1=s[0];
            String s2=s[s.length-1];
            int i=0;
            while(i<s1.length() && i<s2.length())
            {
                if(s1.charAt(i)==s2.charAt(i))
                    i++;
                else
                    break;
            }
            return s1.substring(0,i);
    }
}


