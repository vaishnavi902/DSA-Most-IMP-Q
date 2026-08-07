/* when the arr = [2,4,6,8,9]     target = 12  -----> arr[1] + arr[3] == 4 + 8 */
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void twoSumBruteForce(vector<int>& arr, int target) {
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == target) {
                    cout << "true" << endl;
                    return;
                }
            }
        }
        
        cout << "false" << endl;
    }
};

//TIME COMPLEXITY : O(n²)
//SPACE COMPLEXITY : O(1)
