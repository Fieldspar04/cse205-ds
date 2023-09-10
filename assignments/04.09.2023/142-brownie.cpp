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
    ListNode *detectCycle(ListNode *head) {
        ListNode * slow = head;
        bool cycle = false;
        ListNode * fast = head;
        
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                cycle= true;
                break; 
            }
        }
        if(cycle==0){return NULL;}
        fast = head;
        while(fast != slow)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return fast;

    }
};