// https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/description/

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size(),rightSum=0,leftSum=0,sum=0;
        for (int i:nums)
            rightSum+=i;
        for (int i=0;i<n;i++)
        {
            rightSum-=nums[i];
            leftSum+=nums[i];
            sum=abs((i+1)*nums[i]-leftSum)+abs((n-i-1)*nums[i]-rightSum);
            nums[i]=sum;
        }
        return nums;
    }
};
