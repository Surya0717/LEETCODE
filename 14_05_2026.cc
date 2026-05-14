#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isGood(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int c = 1;

        for (int i = 0; i < nums.size() - 1; i++) {

            if (nums[i] != c) {
                return false;
            }

            c++;
        }

        return nums[nums.size() - 1] == nums.size() - 1;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {1, 2, 3, 3};

    if (obj.isGood(nums)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}