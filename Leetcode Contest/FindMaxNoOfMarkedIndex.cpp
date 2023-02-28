class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& n) {
        int c=0,i=0;
        int j=n.size()/2;
        sort(n.begin(),n.end());           
            while(j<n.size() && i<n.size()/2)
            {
                if(2*n[i]<=n[j])
                    i++,c++;
                j++;
            }
        return c*2;
    }
};
