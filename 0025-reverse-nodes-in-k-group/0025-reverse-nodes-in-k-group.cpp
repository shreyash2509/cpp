class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;
        int len = 0;
        
        // Count the number of nodes in the list
        while (head) {
            len++;
            head = head->next;
        }
        
        // Reverse in groups of size k
        for (int i = 0; i < len / k; i++) {
            for (int j = 0; j < k - 1; j++) {
                ListNode* next = curr->next;
                curr->next = next->next;
                next->next = prev->next;
                prev->next = next;
            }
            prev = curr;
            curr = curr->next;
        }
        
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};
