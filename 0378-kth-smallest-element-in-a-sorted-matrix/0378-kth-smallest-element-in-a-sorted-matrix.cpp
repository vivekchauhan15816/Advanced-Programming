class Solution {
    int countLessEqual(vector<vector<int>>& matrix, int val) {
        int count = 0, n = matrix.size();
        for (int i = 0; i < n; ++i) {
            count += upper_bound(matrix[i].begin(), matrix[i].end(), val) - matrix[i].begin();
        }
        return count;
    }
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int low = matrix[0][0], high = matrix[n - 1][n - 1];

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (countLessEqual(matrix, mid) < k)
                low = mid + 1;
            else
                high = mid;
        }
        return low;
    }
};
