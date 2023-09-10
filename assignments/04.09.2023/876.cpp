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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* temp = head;
        ListNode* curr=head;
        while (temp){
            temp= temp->next;
            count++;
        }
        for(int i=0;i<count/2;i++)
            curr= curr->next;
        // else{
        //     for(int i=0;i<count/2;i++)
        //         curr = curr->next;
        // }
        return curr;
    }
};