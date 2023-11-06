class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int> hcopy(h.size());
        for(int i = -1; ++i< h.size();){
            hcopy[i] = h[i];
        }
        sort(hcopy.begin(),hcopy.end());
        int cnt = 0;
        for(int i = -1; ++i<h.size();){
            if(h[i] != hcopy[i]){
                cnt++;
            }
        }
        return cnt;
    }
};