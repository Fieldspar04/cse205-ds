class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        map<char, int> fancy;
        fancy['('] = 1, fancy['{'] = 2, fancy['['] = 3;
        fancy[')'] = 1, fancy['}'] = 2, fancy[']'] = 3;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '['){
                st.push(fancy[c]);
            } else if (c == ')' || c == ']' || c == '}') {
                if (st.empty() || ((st.top() ^ fancy[c]) != 0)) return false;
                st.pop();
            }
        }
        
        return st.empty();
    }
};