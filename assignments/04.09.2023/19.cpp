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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr=head;
        int size=0;
        while(curr){
            size++;
            curr=curr->next;
        }
        curr=head;
        // if(size==1)
        //     return NULL;
        if(n==size)
            return head->next;
        for(int i=1;i<size-n;i++){
            curr=curr->next;
        }    
        // ListNode *temp=curr->next;
        curr->next=curr->next->next;
        return head;
    }
};