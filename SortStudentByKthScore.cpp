class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& s, int k) {
        for(int i=0 ;i<s.size(); i++){
            for(int j=i+1; j<s.size(); j++){
                if(s[i][k]<s[j][k]){
                    swap(s[i],s[j]);
                }
            }
        }
        return s;
    }
};
