// https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/description/

class Solution {
public:
    long long countSubarrays(vector<int>& n, int k) {
        long long int ans=0,count=0;
        long long int max=*max_element(n.begin(),n.end());
        int left=0, right=0;
        int len=n.size();
        while(left<len && right<len)
        {
            if(n[right]==max)
                count++;
            while(count>=k)
            {
                if(n[left]==max)
                    count--;
                left++;
                ans+=len-right;
            }
            right++;
        }
        return ans;
    }
};
