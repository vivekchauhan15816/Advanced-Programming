class Solution {
public:
    vector<string> par(int n, int left, int right, vector<string>& ans,
                       string temp) {
        if (left + right == 2 * n) {
            ans.push_back(temp);
            return ans;
        }
        if (left < n) {
            temp.push_back('(');
            par(n, left + 1, right, ans, temp);
            temp.pop_back();
        }
        if (right < left) {
            temp.push_back(')');
            par(n, left, right + 1, ans, temp);
            temp.pop_back();
        }
        return ans;
    }

    vector<string> generateParenthesis(int n) {
        int left = 0;
        int right = 0;
        vector<string> ans;
        string temp;
        return par(n, left, right, ans, temp);
    }
};