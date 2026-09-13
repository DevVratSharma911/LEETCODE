class Solution {
public:
    int countlap(vector<vector<int>>& A, vector<vector<int>>& B, int x, int y) {
        int count = 0;
        int n = A.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int row = i + x;
                int col = j + y;
                if (row < 0 || row > n - 1 || col < 0 || col > n - 1)
                    continue;
                if (A[i][j] == 1 && B[row][col] == 1)
                    count++;
            }
        }
        return count;
    }

    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        int n = A.size();
        int maxOverlap = 0;
        for (int i = -n + 1; i < n; i++) {
            for (int j = -n + 1; j < n; j++) {
                int count = countlap(A, B, i, j);
                maxOverlap = max(maxOverlap, count);
            }
        }
        return maxOverlap;
    }
};