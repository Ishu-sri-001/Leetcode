// https://leetcode.com/problems/furthest-building-you-can-reach/description/

class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue<int>pq;
        for (int i=0;i<h.size()-1;++i)
        {
            int dif=h[i+1]-h[i];
            if(dif>0)
                pq.push(-dif);
            if(pq.size()>l)
            {
                b+=pq.top();
                pq.pop();
            }
            if(b<0)
                return i;
        }
        return h.size()-1;
    }
};
