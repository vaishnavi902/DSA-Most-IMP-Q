/*input ---- '({[]})'    output --- True */
class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for(char ch : s) {

            // Opening brackets
            if(ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            }

            // Closing bracket ')'
            else if(ch == ')') {
                if(st.empty() || st.top() != '(')
                    return false;

                st.pop();
            }

            // Closing bracket ']'
            else if(ch == ']') {
                if(st.empty() || st.top() != '[')
                    return false;

                st.pop();
            }

            // Closing bracket '}'
            else if(ch == '}') {
                if(st.empty() || st.top() != '{')
                    return false;

                st.pop();
            }
        }

        return st.empty();
    }
};
