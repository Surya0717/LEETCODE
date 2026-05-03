#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length())
            return false;

        string temp = s + s;

        return temp.find(goal) != string::npos;
    }
};

int main() {
    Solution obj;

    string s, goal;
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter goal string: ";
    cin >> goal;

    if (obj.rotateString(s, goal))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}