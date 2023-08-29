// https://leetcode.com/problems/4sum/description/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& n, int t) {
        sort(n.begin(),n.end());
        vector<vector<int>>ans;
        set<vector<int>>set;
        for (int i=0;i<n.size()-1;i++)
        {
            for (int j=i+1;j<n.size()-1;j++)
            {
                int k=j+1;
                int l=n.size()-1;
                while(k<l)
                {
                    long long int s=n[i];
                    s+=n[j];
                    s+=n[k];
                    s+=n[l];
                    if(s==t)
                    {
                        set.insert({n[i],n[j],n[k],n[l]});
                        k++;
                        l--;
                }
                else if(s<t)
                    k++;
                else 
                    l--;
            }
        }
        }            
        for (auto itr:set)
            ans.push_back(itr);
        return ans;
    }
};
