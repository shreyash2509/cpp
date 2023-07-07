class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *list3, *hd;
        hd = new ListNode();
        list3 = hd;
        int x = lists.size();
        
        while (!lists.empty()) {
            vector<int> arr(x, INT_MAX);
            
            for (int i = 0; i < x; i++) {
                if (lists[i]) {
                    arr[i] = lists[i]->val;
                } else {
                    arr[i] = INT_MAX; 
                }
            }
            
            int minValue = *min_element(arr.begin(), arr.end());
            int index = find(arr.begin(), arr.end(), minValue) - arr.begin();
            
            if (minValue == INT_MAX) {
                break;
            }
            
            list3->next = lists[index];
            list3 = list3->next;
            
            lists[index] = lists[index]->next;
            
            if (!lists[index]) {
                lists.erase(lists.begin() + index);
                x--;
            }
        }
        
        return hd->next;
    }
};