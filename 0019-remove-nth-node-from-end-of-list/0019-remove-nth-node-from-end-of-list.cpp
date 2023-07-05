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
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* slow=dummy;
        ListNode* fast=dummy;
        int i=0;
        while(i<=n)
        {
            fast=fast->next;
            i++;
        }
        while(fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* d=slow->next;
        slow->next=slow->next->next;
        return dummy->next;
    }
};