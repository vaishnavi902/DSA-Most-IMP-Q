//An anagram means both strings contain the same characters with the same frequency.
/*given two strings s and t, return true if t is an anagram of s.
Example 1: s = "anagram"
           t = "nagaram"
Output: true

Example 2: s = "rat"
           t = "car"

Output: false*/

//OPTIMAL SOLUTION : UNORDERED SET
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> freq;

        // Count characters in s
        for (char ch : s) {
            freq[ch]++;
        }

        // Remove characters using t
        for (char ch : t) {
            freq[ch]--;
        }

        // Check frequencies
        for (auto pair : freq) {
            if (pair.second != 0) {
                return false;
            }
        }

        return true;
    }
};
  
