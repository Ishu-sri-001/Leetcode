// https://leetcode.com/problems/contains-duplicate-ii/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& n, int k) {
        unordered_map<int,int>map;
        for (int i=0;i<n.size();i++)
        {
            if(map.count(n[i]) && (i-map[n[i]]<=k))
                return true;
            map[n[i]]=i;
        }
        return false;
    }
};
