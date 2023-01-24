class Solution {
    public boolean isValid(String s) {
        for (int i=0;i<s.length()-1;i++)
        {
            char c=s.charAt(i);
            char ch=s.charAt(i+1);
            if (c=='(' && ch ==')' )
            return true;
            else if (c=='{' && ch=='}')
            return true;
            else if (c=='[' && ch==']')
            return true;
        }
        return false;
    }
}
