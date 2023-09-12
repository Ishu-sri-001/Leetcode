// https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/description/?envType=daily-question&envId=2023-09-12

class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>mp;
        for (char c: s)
        {
            mp[c]++;
        }
        unordered_set<int>st;
        int count=0;
        for (const auto& pair : mp) 
        {
            int freq = pair.second;
            while (st.count(freq) > 0)
            {
                freq--;
                count++;
            }
            if(freq>0)
                st.insert(freq);
        }
        return count;
    }
};
