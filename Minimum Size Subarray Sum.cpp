/*an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.
  i/p : target = 7, nums = [2,3,1,2,4,3]
  o/p : 2   */
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, sum = 0 ;
        int minsize = INT_MAX;
        for(int right = 0 ; right < nums.size() ; right++){
            sum += nums[right];

            while(sum >= target){
                minsize = min(minsize ,right-left+1);
                sum -= nums[left];
                left++;
            }
        }
    return (minsize == INT_MAX) ? 0 : minsize;    
    }
};
