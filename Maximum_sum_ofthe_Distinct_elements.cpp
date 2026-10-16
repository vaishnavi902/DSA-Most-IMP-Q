/* Distinct subarray elements :-- Input: nums = [1,5,4,2,9,9,9], k = 3
Output: 15*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        long long maxSum = 0;

        // Calculate the sum of the first window
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        maxSum = sum;

        // Slide the window
        for (int right = k; right < nums.size(); right++) {
            sum = sum - nums[right - k];  // Remove outgoing element
            sum = sum + nums[right];      // Add incoming element

            maxSum = max(maxSum, sum);
        }

        return maxSum;
    }
};

int main() {
    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int k = 3;

    Solution obj;
    cout << obj.maximumSubarraySum(nums, k) << endl;

    return 0;
}
