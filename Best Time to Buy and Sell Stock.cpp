/*You are given an integer array `prices` where `prices[i]` is the price of a given stock on the `i`th dayYou want to maximize your profit by choosing a **single day to buy one stock** and choosing a **different day in the future to sell that stock**.
Return the **maximum profit** you can achieve from this transaction. If you cannot achieve any profit, return `0`.

## Example
**Input:**
prices = [7,1,5,3,6,4]

**Output:**
5*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i = 1; i < prices.size(); i++)
        {
            maxProfit = max(maxProfit, prices[i] - minPrice);

            minPrice = min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};

//TIME COMPLEXITY : O(N)
//SPACE COMPLEXITY : O(1)
