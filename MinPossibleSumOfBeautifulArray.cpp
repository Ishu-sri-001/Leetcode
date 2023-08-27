// https://leetcode.com/problems/find-the-minimum-possible-sum-of-a-beautiful-array/description/

class Solution {
public:
    long long minimumPossibleSum(int n, int t) {
        long long s=0;
        unordered_set<int>set;
        int a=1;
        for (int i=a;i<2*n;i++)
        {
            if(set.size()==0)
            {
                set.insert(i);
                s=s+i;
            }
            else if(set.size()==n)
                return s;
            else if (set.find(t-i)==set.end())
            {
                set.insert(i);
                s=s+i;
            }
        }
        return s;
    }
};
