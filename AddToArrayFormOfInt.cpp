class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nu, int k) {
        vector<int> ans;
        int carry = k, i = nu.size() - 1;
        while (i >= 0 || carry != 0) {
            if (i >= 0) {
                carry += nu[i];
            }
            ans.push_back(carry % 10);
            carry /= 10;
            i--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
