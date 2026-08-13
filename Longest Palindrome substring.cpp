/*Given a string s, return the longest palindromic substring in s.

Example 1:
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.*/
class Solution {
private:
    int exceptaroundcentre(string& s, int left , int right){
        while(left >= 0 && right <= s.length() && s[left] == s[right]){
            left--;
            right++;
        }
        return right - left - 1;
    }
public:
    string longestPalindrome(string s) {
        if(s.empty() || s.length() < 1){
            return "";
        }
        int start = 0 , maxlen = 0;
        for(int i = 0; i < s.length(); i++){
            int len1 = exceptaroundcentre(s, i ,i);
            int len2 = exceptaroundcentre(s, i, i+1);
            int currentmax = max(len1, len2);
            if(currentmax >= maxlen){
                maxlen = currentmax;
                start = i - (currentmax - 1)/2;
            }
        }
        return s.substr(start,maxlen);   
    }
};
