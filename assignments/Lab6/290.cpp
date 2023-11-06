class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp;
        vector<char> p;
        vector<string> v;
        for(char c : pattern)
            p.push_back(c);
        for(int i = -1; ++i <s.length();){
            string temp = "";
            while(s[i] != ' ' && i<s.length()){
                temp += s[i];
                i++;
            }
            v.push_back(temp);
        }
        if(v.size() != p.size()) return false;
        for(int i = -1; ++i < p.size();){
            if(mp.count(p[i])){
                if(mp[p[i]] != v[i]) return false;
            }
            else mp[p[i]] = v[i];
        }
        return true;
    }
};