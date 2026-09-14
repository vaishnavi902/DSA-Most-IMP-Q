/*Time: O(n)
Extra space: O(1)*/
  
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n, 1);

        // Prefix product
        int prefix = 1;

        for (int i = 0; i < n; i++) {
            ans[i] = prefix;
            prefix = prefix * nums[i];
        }

        // Suffix product
        int suffix = 1;

        for (int i = n - 1; i >= 0; i--) {
            ans[i] = ans[i] * suffix;
            suffix = suffix * nums[i];
        }

        return ans;
    }
};

int main() {

    vector<int> nums = {1, 2, 3, 4};

    Solution s;

    vector<int> result = s.productExceptSelf(nums);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
