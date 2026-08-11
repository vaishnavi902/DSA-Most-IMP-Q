/*Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0 , high = nums.size() - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                return mid;
            }

            //Left half part
            if(nums[low] <= nums[mid]){
                if(target >= nums[low] && target < nums[mid]){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }

            //Right Part
            else{
                if(target > nums[mid] && target <= nums[high]){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};



  
