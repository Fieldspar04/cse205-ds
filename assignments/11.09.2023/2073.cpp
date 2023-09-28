class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int sum = 0;
        while(tickets[k]){
            // if(ticket[k] == 0) break;
            for(int i = -1; ++i < tickets.size();){
                tickets[i] ? (sum++ , tickets[i]--) : 1-1;
                if(!tickets[k]) break;
            }
        }
        return sum;
    }
};