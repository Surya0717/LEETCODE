#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int n = boxGrid.size();
        int m = boxGrid[0].size();
        vector<vector<char>> ans(m, vector<char>(n, '.'));

        for (int r = 0; r < n; r++) {
            int level = m - 1;
            for (int c = m - 1; c >= 0; c--) {
                if (boxGrid[r][c] == '*') {
                    ans[c][n - 1 - r] = '*';
                    level = c - 1;
                }
                else if (boxGrid[r][c] == '#')
                {
                    ans[level][n - 1 - r] = '#';
                    level--;
                }                
            }
        }

        return ans;
    }
};

// Helper function to easily print the 2D grid
void printGrid(const vector<vector<char>>& grid) {
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    // 1. Create an instance of the Solution class
    Solution solution;

    // 2. Define a sample input grid
    // '#' represents a stone, '*' represents an obstacle, '.' is empty space
    vector<vector<char>> boxGrid = {
        {'#', '.', '*', '.'},
        {'#', '#', '*', '.'}
    };

    // 3. Print the original grid
    cout << "--- Original Box ---" << "\n";
    printGrid(boxGrid);
    cout << "\n";

    // 4. Call the function and store the result
    vector<vector<char>> result = solution.rotateTheBox(boxGrid);

    // 5. Print the rotated and gravity-applied grid
    cout << "--- Rotated Box ---" << "\n";
    printGrid(result);

    return 0;
}