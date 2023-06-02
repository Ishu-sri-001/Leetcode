// https://leetcode.com/problems/3sum/description/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        sort(n.begin(),n.end());
        vector<vector<int>>ans;
        set<vector<int>>set;
        for (int i=0;i<n.size();i++)
        {
            int j=i+1;
            int k=n.size()-1;
            while(j<k)
            {
                int s=n[i]+n[j]+n[k];
                if(s==0)
                {
                    set.insert({n[i],n[j],n[k]});
                    j++;
                    k--;
                }
                else if(s<0)
                    j++;
                else 
                    k--;
            }
        }
        for (auto itr: set)
            ans.push_back(itr);
        return ans;
    }
};
