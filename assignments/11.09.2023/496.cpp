class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = -1; ++i < nums1.size();){
            int k = -1;
            for(int j = -1; ++j < nums2.size();){
                if(nums1[i] == nums2[j]){
                    k = nums2[j];
                    if(j == nums2.size() - 1) ans.push_back(-1);
                    continue;
                }
                if(k != -1 && nums2[j] > k){
                    ans.push_back(nums2[j]);
                    break;
                }
                if(j == nums2.size() - 1) ans.push_back(-1);
            }
        }
        return ans;
    }
};