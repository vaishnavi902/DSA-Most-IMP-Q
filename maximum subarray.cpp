/*To find out the cosecutive elements maximum array sum [KADANE'S ALGO]
Array :{-2, 1, -3, 4, -1, 2, 1, -5, 4}      O/P: 6    Explain: {4,-1,2,1}*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxArray(vector<int>& nums){
        int n = nums.size();
        int sum = nums[0];
        int maxi = nums[0];
        for(int i = 0;i < n; i ++){
            sum = max(nums[i] , sum + nums[i]);
            maxi = max(maxi , sum);
        }
        return maxi;
    }
};

int main(){
    Solution sp;
    vector<int> data = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "sum of maxArray :" <<sp.maxArray(data) <<endl;
    return 0;
}
