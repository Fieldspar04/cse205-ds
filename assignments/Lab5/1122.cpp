class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        sort(arr1.begin(), arr1.end());
        map<int,int> mp;
        for(const auto &it:arr1)
            mp[it]++;
        vector<int> ans;
        for(const auto &it : arr2){
            const auto &j = mp.find(it);
            while(j->second){
                ans.push_back(j->first);
                j->second--;
            }
            mp.erase(it);
        }
        for(auto &x : mp){
            while(x.second){
                ans.push_back(x.first);
                x.second--;
            }
        }
        return ans;
    }
};