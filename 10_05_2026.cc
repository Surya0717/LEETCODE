#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    int n;

    int solve(int i, vector<int>& nums, int target, vector<int>& t) {
        if (i == n - 1) {
            return t[i] = 0;
        }

        if (t[i] != INT_MIN) {
            return t[i];
        }

        int result = INT_MIN;

        for (int j = i + 1; j < n; j++) {
            if (abs(nums[i] - nums[j]) <= target) {
                int temp = 1 + solve(j, nums, target, t);
                result = max(result, temp);
            }
        }

        return t[i] = result;
    }

    int maximumJumps(vector<int>& nums, int target) {
        n = nums.size();
        vector<int> t(n, INT_MIN);
        int result = solve(0, nums, target, t);
        return result < 0 ? -1 : result;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    Solution obj;
    cout << obj.maximumJumps(nums, target) << endl;

    return 0;
}