/*Find a contiguous subarray of length at least 2 whose sum is divisible by k.

Example:
- Input: nums = [23,2,4,6,7], k = 6
- Output: true
- Explanation: Subarray [2,4] has sum 6, divisible by 6.*/
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        mp[0] = -1;
        int sum = 0 ;

        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];                                        //prefix sum
            int rem = sum % k;

            if(mp.find(rem) != mp.end()){
                if(i - mp[rem] >= 2){
                    return true;
                }
            }else{
                mp[rem] = i;
            }
        }
        return false;
    }
};
