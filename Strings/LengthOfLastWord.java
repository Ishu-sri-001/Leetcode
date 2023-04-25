// https://leetcode.com/problems/length-of-last-word/description/

class Solution {
    public int lengthOfLastWord(String s) {
        s.trim();
        int l=0;
        for (int i=s.length()-1;i>=0;i--)
        {
            if(l==0 && s.charAt(i)==' ')
                continue;
            if(s.charAt(i)==' ')
                return l;
            else 
                l++;
        }
        return l;
    }
}
