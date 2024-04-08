// https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/description/?envType=daily-question&envId=2024-04-08

class Solution {
public:
    int countStudents(vector<int>& stu, vector<int>& sand) {
        vector<int>count(2,0);
        for(int s:stu)
            count[s]++;
        int remaining=stu.size();
        for(int i: sand)
        {
            if(count[i]==0)
                break;
            remaining--;
            count[i]--;
        }
        return remaining;
    }
};
