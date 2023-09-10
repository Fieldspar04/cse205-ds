/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *curr = head;
        // ListNode *forward=NULL;
        // ListNode *prev=NULL; 
        vector<int> a;
        int flag=0;
        // int size=0;
        while(curr){
            // size++;
            a.push_back(curr->val);
            curr=curr->next;
        }
        int i=0,n=a.size();
        for(i=0;i<n/2;i++){
            if(a[i]!=a[n-i-1]){
                flag=1;
                break;
            }
        }
        return !flag;
        // curr=head;
        // if(size%2==0){
        //     for(int i=0;i<size/2;i++){
        //         forward=curr->next;
        //         curr->next=prev;
        //         prev=curr;
        //         curr =forward;
        //     }
        //     return prev==curr;
        // }
        // for(int i=0;i<=size/2;i++){
        //     forward=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr =forward;
        // }
        // return prev==curr->next;
    }
};