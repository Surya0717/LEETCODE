#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;

        for (int num : nums) {
            string s = to_string(num);

            for (char c : s) {
                result.push_back(c - '0');
            }
        }

        return result;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {13, 25, 83, 77};

    vector<int> ans = obj.separateDigits(nums);

    cout << "Output: ";
    
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}