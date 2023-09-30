// https://leetcode.com/problems/132-pattern/description/

class Solution {
public:
    bool find132pattern(vector<int>& n) 
    {
        stack<int>st;
        int s3=INT_MIN;
        for (int i=n.size()-1;i>=0;i--)
        {
            if(n[i]<s3)
                return true;
            else while(!st.empty() && n[i]>st.top())
            {
                s3=st.top();
                st.pop();
            }
            st.push(n[i]);
        }   
        return false;
    }
};
