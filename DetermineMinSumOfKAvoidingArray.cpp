// https://leetcode.com/problems/determine-the-minimum-sum-of-a-k-avoiding-array/description/

class Solution {
public:
    int minimumSum(int n, int k) {
        if(n==1)
            return 1;
        int c=1;
        int sum=0;
       // vector<int>ans;
        unordered_set<int>s;
        for (int i=c;i<2*n;i++)
        {
            if(s.size()==0)
            {
                //ans.push_back(i);
                s.insert(i);
                sum=sum+i;
            }
            else if (s.size()==n)
                return sum;
            else if (s.find(k-i)==s.end())
            {
                s.insert(i);
                sum=sum+i;
                //ans.push_back()
            }
        }
        return sum;
    }
};
