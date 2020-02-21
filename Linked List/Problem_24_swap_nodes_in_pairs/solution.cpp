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
    ListNode* swapPairs(ListNode* head) {
        ListNode *first,*second,*res_head;
        if(head==NULL)
            return NULL;
        first= head;
        if(head->next)
            second = head->next;
        else
            return head;
        res_head = second;
        ListNode *last_tail=NULL;
        while(first->next  && second->next){
             if(last_tail==NULL)
                last_tail = second;
            else
                last_tail ->next = second;
            ListNode *temp = second->next; //->3
            second->next = first; //2->1
            first->next = temp; //1->3

            last_tail = first;
            first = temp;
            second = first->next;
            // printList(res_head);
        }
        //Copw with last two nodes  or one nodes
        //One nodes
        if(first && !second)
            last_tail->next = first;
        else{
            if(last_tail){
                last_tail->next = second;
            }
            second->next = first;
            first->next = NULL;
        }

        return res_head;
    }
    void printList(ListNode *head){
        while(head){
            cout<<head->val<<" ";
            head = head->next;
        }
    }
};
