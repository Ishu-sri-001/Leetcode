class Solution {
public:
    int splitNum(int n) {
        vector<int>t;
        while(n>0)
        {
            t.push_back(n%10);
            n=n/10;
        }
        sort(t.begin(),t.end());
        int a=0,b=0;
        for (int i=0;i<t.size();i++)
        {
            if(i%2==0)
                a=a*10+t[i];
            else
                b=b*10+t[i];
        }
        int s=a+b;
        return s;
    }
};
