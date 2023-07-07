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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;   
        if(list2 == NULL) return list1;

        ListNode *head =NULL,*tail =NULL;
        while(list1 and list2)
        {
            if(list1->val<list2->val)
            {
                if(head == NULL)
                {
                    head = list1;
                    tail = list1;
                }
                else{
                    tail->next = list1;
                    tail = tail->next;
                }
                list1 = list1->next;
            }
            else{
                if(head == NULL)
                {
                    head = list2;
                    tail = list2;
                }
                else{
                    tail->next = list2;
                    tail = tail->next;
                }
                list2 = list2->next;
            }
        }
        if(list1)
        {
            tail->next = list1;
        }
        if(list2)
        {
            tail->next = list2;
        }
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //merge all 
        // divide and conquer
        if(lists.size() == 0)
        {
            return NULL;
        }
        ListNode *head = NULL;
        vector<ListNode*>list(lists.begin(),lists.end());
        while(list.size()>1)
        {
            vector<ListNode*>l;
            int n = list.size();
            // cout<<n<<"\n";
            for(int i = 1;i<n;i+=2)
            {
                ListNode *t = mergeTwoLists(list[i],list[i-1]);
                l.push_back(t);
            }
            if(n%2!=0)
            {
                l.push_back(list[n-1]);
            }
            swap(l,list);
        }
        return list[0];
    }
};