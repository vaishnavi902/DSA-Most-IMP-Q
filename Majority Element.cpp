/*Example: nums = [2, 2, 1, 1, 1, 2, 2]
Output:- 2 */

//Boyer-Moore's Voting Algorithm
#include <iostream>
#include <vector>

class Solution {
public:
    int findMajorityElement(const std::vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        // Step 1: Find the majority candidate
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }

        // Step 2: Verify the candidate (Optional if the problem guarantees a majority element exists)
        int verificationCount = 0;
        for (int num : nums) {
            if (num == candidate) {
                verificationCount++;
            }
        }

        if (verificationCount > nums.size() / 2) {
            return candidate;
        }

        return -1; // Return -1 if no majority element exists
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int result = solution.findMajorityElement(nums);

    if (result != -1) {
        std::cout << "The majority element is: " << result << std::endl;
    } else {
        std::cout << "No majority element found." << std::endl;
    }

    return 0;
}
