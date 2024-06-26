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
    ListNode* sortList(ListNode* head) {
        vector<int> vec;
        ListNode* p = head;
        while(p)
        {
            vec.push_back(p->val);
            p = p->next;
        }
        sort(vec.begin(),vec.end());
        p = head;
        int i = 0;
        while(p)
        {
            p->val = vec[i];
            i++;
            p = p->next;
        }
        return head;
    }
};