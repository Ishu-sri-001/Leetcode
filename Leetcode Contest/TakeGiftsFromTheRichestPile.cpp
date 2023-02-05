class Solution {
public:
    long long pickGifts(vector<int>& g, int k) {
        for(int i=0; i<k; i++){
            int m= max_element(g.begin(),g.end())-g.begin();
            g[m]=floor(sqrt(g[m]));
        }
        long long sum=0;
        for(int i=0; i<g.size(); i++){
            sum=sum+g[i];
        }
        return sum;
    }
};
