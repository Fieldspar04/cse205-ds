/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *currA=headA;
        ListNode *currB=headB;
        int sizeA=0,sizeB=0;        
        while(currA){
            sizeA++;
            currA=currA->next;
        } 
        while(currB){
            sizeB++;
            currB=currB->next;
        }
        currA=headA;
        currB=headB;
        int diff;
        if(sizeA>sizeB){
            diff=sizeA-sizeB;
            while(diff){
                currA=currA->next;
                diff--;
            }                
        }
        else{
            diff=sizeB-sizeA;
            while(diff){
                currB=currB->next;
                diff--;
            }                
        }
        while (currA != currB) {
            currA = currA->next;
            currB = currB->next;
        }
        return currA;
        
    }
};