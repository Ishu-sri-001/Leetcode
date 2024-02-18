// https://leetcode.com/problems/climbing-stairs/description/

class Solution {
public:
    int calc(int n,unordered_map<int,int>&memo)
    {
        if(n==0 || n==1)
            return 1;
        if(memo.find(n)==memo.end())
            memo[n]=calc(n-1,memo)+calc(n-2,memo);
        return memo[n];
    }
    int climbStairs(int n) {
        unordered_map<int,int>memo;
        return calc(n,memo);
    }
};
