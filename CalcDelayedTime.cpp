// https://leetcode.com/problems/calculate-delayed-arrival-time/

class Solution {
public:
    int findDelayedArrivalTime(int a, int d) {
        return (a+d)%24;
    }
};
