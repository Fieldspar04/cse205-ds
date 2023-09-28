class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(char c : s){
            if(c == '*'){
                if(st.empty()) continue;
                st.pop();
            }
            else st.push(c);
        }
        string ans = "";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        for(int i = -1; ++i < ans.length()/2;){
            swap(ans[i], ans[ans.length() - i - 1]);
        }
        return ans;
    }
};