class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* prevGroupTail = dummy;
        int len = 0;
        ListNode* curr = head;
        while (curr) {
            len++;
            curr = curr->next;
        }
        for (int i = 0; i < len / k; i++) {
            ListNode* currGroupHead = prevGroupTail->next;
            ListNode* currGroupTail = currGroupHead;
            ListNode* nextGroupHead = nullptr;

            for (int j = 0; j < k - 1; j++) {
                currGroupTail = currGroupTail->next;
            }

            nextGroupHead = currGroupTail->next;

            ListNode* prev = nullptr;
            curr = currGroupHead;
            while (curr != nextGroupHead) {
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }

            prevGroupTail->next = currGroupTail;
            currGroupHead->next = nextGroupHead;
            prevGroupTail = currGroupHead;
        }

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};