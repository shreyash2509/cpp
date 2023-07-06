/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)return NULL;
        for(Node* curr=head;curr!=NULL;)
        {
            Node* tmp = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = tmp;
            curr = tmp;
        }
        for(Node* curr=head;curr!=NULL;curr=curr->next->next)
        {
            curr->next->random = curr->random?curr->random->next:NULL;
        }
        Node* temp = head->next,*original=head,*copy=head->next;
        while(copy && original)
        {
            original->next = original->next?original->next->next:original->next;
            copy->next = copy->next?copy->next->next:copy->next;
            original = original->next;
            copy = copy->next;

        }
        return temp;
        
    }
};