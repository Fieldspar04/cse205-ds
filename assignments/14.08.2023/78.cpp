// class Solution {
// public:
//     void solve(vector<int>nums,vector<vector<int>>&ans,vector<int>output,int index){
//         if(index>=nums.size()){
//             ans.push_back(output);
//             return;
//         }
//         solve(nums,ans,output,index+1);
//         int elements=nums[index];
//         output.push_back(elements);
//         solve(nums,ans,output,index+1);
//     }

//     vector<vector<int>> subsets(vector<int>& nums) {
//          vector<vector<int>>ans;
//          vector<int>output;
//          int index=0;
//          solve(nums,ans,output,index);
//          return ans;
//     
//     }
// };
class Solution {
public:
    int custom(int i,int totalcount,string moves,int l,int r){
        for(i;i<=moves.length;i++){
            if(moves[i]=='L')
                l++;
            else if(moves[i]=='R')
                r++;
            else
                _++;
        }
        for(i=0;i<=moves.length;i++){
            if(l>r){
                if(moves[i]=='_'){
                    //moves[i]='L';
                    l++;
                    totalcount=l;
                }    
            }  
            else if(l<r){
                if(moves[i]=='_'){
                    //moves[i]='R';
                    r++;
                    totalcount=r;
                }
            }
            if(moves[i]=='_'){             
                //moves[i]='R';
                r++;
                totalcount=r;
            }
        }
        return totalcount;
    }
    int furthestDistanceFromOrigin(string &moves) {
        moves = "L_RL__R";
        int i,l,r;
        int totalcount;
        custom(0,0,moves,0,0)
        return totalcount;
    }
    int main() {
        string moves;
        furthestDistanceFromOrigin(moves);
        return 0;
    }
};