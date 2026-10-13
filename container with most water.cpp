/*Given an array of heights, find two lines that can hold the maximum amount of water.
Example:
- Input: height = [1,8,6,2,5,4,8,3,7]
- Output: 49*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int i = 0, j = height.size() - 1, maxWater = 0;

    while (i < j) {
        int total = min(height[i], height[j]) * (j - i);
        maxWater = max(maxWater, total);

        if (height[i] < height[j])
            i++;
        else
            j--;
    }

    cout << maxWater;
    return 0;
}
