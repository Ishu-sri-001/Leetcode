// https://leetcode.com/problems/last-stone-weight/description/

class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
       priority_queue<int>ans(s.begin(),s.end());
       while(ans.size()>1)
       {
           int q=ans.top();
           ans.pop();
           int t=ans.top();
           ans.pop();

           if(q!=t)
            ans.push(q-t);
       }
       if (!ans.empty())
        return ans.top();
        return 0;
    }
};


