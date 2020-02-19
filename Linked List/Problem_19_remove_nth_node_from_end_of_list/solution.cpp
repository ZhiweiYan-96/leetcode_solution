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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* iter= head; //the first one
        ListNode* slow_m1;
        ListNode* slow = head;
        ListNode* iter_m1;
        if(head->next == NULL){
            return NULL;
        }
        for(int i=0; i<n; ++i){
            iter_m1 = iter;
            iter = iter->next; // the nth one
        }
        if(iter==NULL){
            head= head->next;
            return head;
        }
        while(iter !=NULL){
            slow_m1 = slow;
            slow = slow->next;
            iter = iter->next;
        }
        slow_m1->next = slow->next;
        return head;
    }
};
