/*Given an integer n, repeatedly replace it with the sum of the squares of its digits. Return true if it eventually becomes 1; otherwise, return false.
 Example 1:
- Input: n = 19
- Output: true
- Explanation: 19 → 82 → 68 → 100 → 1 */
class Solution {
public:
    bool isHappy(int n) {
        while(n!= 1 && n!= 4){
            int sum =0;
            while(n > 0){
                int a = n % 10;
                sum += a*a;
                n = n/10;
            }
            n = sum;
        }
        if(n == 1){
            return true;
        }else{
            return false;
        }
    }
};
