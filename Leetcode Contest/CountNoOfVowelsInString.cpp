class Solution {
public:
    int vowelStrings(vector<string>& wo, int lef, int r) {
        int c=0;
        for (int i=lef;i<=r;i++)
        {
            string w=wo[i];
            int l=w.length();
            if ((w[0]=='a' || w[0]=='e' || w[0]=='i' || w[0]=='o' || w[0]=='u') && ((w[l-1])=='a' || w[l-1]=='e' || w[l-1]=='i' || w[l-1]=='o' || w[l-1]=='u'))
                c++;
        }
        return c;
    }
};
