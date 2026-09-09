/*Example: s = "A man, a plan, a canal: Panama"
O/P:- true
Explanation : amanaplanacanalpanama*/

//BEST APPROCH : TWO POINTERS
class Solution {
public:
    bool isPalindrome(string s) {

        string p = "";

        // Keep only letters and numbers, convert to lowercase
        for (char ch : s) {
            if (isalnum(ch)) {
                p += tolower(ch);
            }
        }

        int i = 0;
        int j = p.size() - 1;

        while (i < j) {

            if (p[i] != p[j]) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};
