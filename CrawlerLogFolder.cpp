// https://leetcode.com/problems/crawler-log-folder/description/

class Solution {
public:
    int minOperations(vector<string>& log) {
        int lvl=0;
        int len=log.size();
        for (int i=0;i<len;i++)
        {
            if(log[i]=="../" && lvl!=0)
            {
                lvl--;
            }
            else if (log[i]=="../" && lvl==0)
            {
                continue;
            }
            else if (log[i]=="./")
                continue;
            else 
                lvl++;
        }
        return lvl;
    }
};
