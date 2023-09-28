class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;

        for(char c : s){
            if(c == '#'){
                if(st1.empty() != true){
                    st1.pop();
                }
                continue;
            }                
            st1.push(c);
        }

        for(char c : t){
            if(c == '#'){
                if(st2.empty() != true){
                    st2.pop();
                }
                continue;
            }
            st2.push(c);
        } 
        return st1 == st2;       
    }
};