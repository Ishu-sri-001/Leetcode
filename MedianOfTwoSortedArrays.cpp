class Solution {
public:
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
        vector<int>a;
        for (int i=0;i<n1.size();i++)
        {
            a.push_back(n1[i]);
        }
        for (int i=0; i<n2.size();i++)
        {
            a.push_back(n2[i]);
        }
        sort(a.begin(),a.end());
        int mid=a.size()/2;
        if(a.size() % 2== 0){
            double sum= a[mid]+a[mid-1];
            return sum/2;
        }
            return a[mid];
    }
};
