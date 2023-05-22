// https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& n, int k) {
        unordered_map<int,int>a;
        vector<int>ans;
        for (int i=0;i<n.size();i++)
        {
                a[n[i]]++;
        }
        priority_queue<pair<int,int>>q;
        for (auto i : a)
        {
            q.push(make_pair(i.second,i.first));
        }
        for (int i=0;i<k;i++)
        {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};
