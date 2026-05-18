#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int solve_BFS(vector<int>& arr, int& n) {
        vector<bool> visited(n, false);
        unordered_map<int, vector<int>> mp; // Store indices with same values
        
        for(int i = 0; i < n; i++) {
            mp[arr[i]].push_back(i);
        }
        
        queue<int> que;
        que.push(0);
        visited[0] = true;
        int steps = 0;
        
        while(!que.empty()) {
            int size = que.size();
            
            // Check this level
            while(size--) {
                int curr = que.front();
                que.pop();
                
                if(curr == n-1) {
                    // BFS ensures minimum steps
                    return steps;
                }
                
                int left  = curr - 1;
                int right = curr + 1;
                
                if(left >= 0 && !visited[left]) {
                    que.push(left);
                    visited[left] = true;
                }
                
                if(right < n && !visited[right]) {
                    que.push(right);
                    visited[right] = true;
                }
                
                for(const int &idx : mp[arr[curr]]) {
                    if(!visited[idx]) {
                        que.push(idx);
                        visited[idx] = true;
                    }
                }
                // Erase to avoid TLE from rechecking
                mp.erase(arr[curr]);
            }
            steps++;
        }
        
        return -1;
    }
    
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if(n == 1)
            return 0;
        return solve_BFS(arr, n);
    }
};

int main() {
    Solution sol;
    
    // Test case 1
    vector<int> arr1 = {100, -23, -23, 404, 100, 23, 23, 23, 3, 404};
    cout << "Test 1: " << sol.minJumps(arr1) << endl; // Expected: 3
    
    // Test case 2
    vector<int> arr2 = {7, 6, 9, 6, 9, 6, 9, 7};
    cout << "Test 2: " << sol.minJumps(arr2) << endl; // Expected: 1
    
    // Test case 3
    vector<int> arr3 = {11, 22, 7, 7, 7, 7, 7, 7, 7, 22, 13};
    cout << "Test 3: " << sol.minJumps(arr3) << endl; // Expected: 3
    
    return 0;
}