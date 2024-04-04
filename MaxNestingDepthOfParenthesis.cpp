// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/

class Solution {
public:
    int maxDepth(string s) {
        int dpt=0,cur=0;
        for(char ch: s)
        {   
            cur+=(ch=='(')-(ch==')');
            dpt=max(cur,dpt);
        }
        return dpt;
    }
};
