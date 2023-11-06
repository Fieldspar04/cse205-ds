class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();++i){    
            mp[s[i]]++;
        }

        priority_queue<pair<int,char>> pq;
        for(auto itr:mp){       
            pq.push(pair(itr.second,itr.first));
        }

        string ans="";
        while(pq.empty()==false){    
            pair temp=pq.top();
            pq.pop();
            while(temp.first--){
                ans +=temp.second;
                }

        }
        return ans;
    }
};