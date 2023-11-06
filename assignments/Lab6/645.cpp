class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int cnt = 0;
        map<int,int> mp;
        for(auto num : nums){ 
            mp[num]++;
        }
        sort(nums.begin(),nums.end());
        for(auto num : nums){ 
            cnt++;
            if(!binary_search(nums.begin(),nums.end(),cnt)) break;
        }
        
        vector<int> v(2,-1);
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second>1){
                v[0] = it->first;
                v[1] = cnt;
                break;
            }
        }
        return v;
    }
};