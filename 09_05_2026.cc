#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        int layers = min(m, n) / 2;

        for (int layer = 0; layer < layers; layer++) {

            vector<int> nums;

            int top = layer;
            int bottom = m - layer - 1;
            int left = layer;
            int right = n - layer - 1;

            // Top row
            for (int j = left; j <= right; j++) {
                nums.push_back(grid[top][j]);
            }

            // Right column
            for (int i = top + 1; i <= bottom - 1; i++) {
                nums.push_back(grid[i][right]);
            }

            // Bottom row
            for (int j = right; j >= left; j--) {
                nums.push_back(grid[bottom][j]);
            }

            // Left column
            for (int i = bottom - 1; i >= top + 1; i--) {
                nums.push_back(grid[i][left]);
            }

            int len = nums.size();

            int normalized_k = k % len;

            // Rotate left
            rotate(nums.begin(), nums.begin() + normalized_k, nums.end());

            int idx = 0;

            // Put values back into grid

            // Top row
            for (int j = left; j <= right; j++) {
                grid[top][j] = nums[idx++];
            }

            // Right column
            for (int i = top + 1; i <= bottom - 1; i++) {
                grid[i][right] = nums[idx++];
            }

            // Bottom row
            for (int j = right; j >= left; j--) {
                grid[bottom][j] = nums[idx++];
            }

            // Left column
            for (int i = bottom - 1; i >= top + 1; i--) {
                grid[i][left] = nums[idx++];
            }
        }

        return grid;
    }
};

int main() {
    Solution sol;

    int m, n, k;

    cout << "Enter rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> grid(m, vector<int>(n));

    cout << "Enter grid elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cout << "Enter k: ";
    cin >> k;

    vector<vector<int>> result = sol.rotateGrid(grid, k);

    cout << "\nRotated Grid:\n";

    for (auto &row : result) {
        for (auto &val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}