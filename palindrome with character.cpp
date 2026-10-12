/*Convert the string to lowercase, remove spaces and punctuation, then use two pointers (i and j) to compare characters from both ends.
If any characters differ, return false; otherwise, return true
EX:---- Input: "A man, A plan , a canal : panama"
        Output: true */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s = "A man, A plan , a canal : panama";

    string temp = "";
    for (char ch : s) {
        if (isalnum(ch)) {
            temp += tolower(ch);
        }
    }
    s = temp;

    int n = s.length();
    int i = 0, j = n - 1;

    while (i < j) {
        if (s[i] != s[j]) {
            cout << false;
            return 0;
        }
        i++;
        j--;
    }

    cout << true;
    return 0;
}
