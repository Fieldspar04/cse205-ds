class Solution {
public:
    void helper(int i,vector<char>&s){
        if(i>=s.size()/2){
            return;
        }
        swap(s[i],s[s.size()-i-1]);
        helper(i+1,s);
    }
    void reverseString(vector<char>& s) {
        helper(0,s);
    }
};