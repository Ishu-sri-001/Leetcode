// https://leetcode.com/problems/find-polygon-with-the-largest-perimeter/description/

class Solution {
public:
    long long largestPerimeter(vector<int>& n) {
        long long sum=0;
        sort(n.begin(),n.end());
        int l=n.size();
        for (auto i:n)
            sum+=i;
        for (int i=l-1;i>=2;i--)
        {
            sum-=n[i];
            if(sum>n[i])
                return n[i]+sum;
        }
        return -1;
    }
};
