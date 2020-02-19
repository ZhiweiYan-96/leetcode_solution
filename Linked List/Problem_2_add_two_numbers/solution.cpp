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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res;
        ListNode* res_head;
        bool step=false;
        bool start = true;
        while(l1 && l2){
            int res_temp = (l1->val) + (l2->val);
            if(step) res_temp += 1;
            if(res_temp>=10){
                res_temp = (res_temp % 10);
                step = true;
            }else { step =false;}
            ListNode *temp = new ListNode(res_temp);
            if(start) { res_head = temp; res= temp; start=false;}
            else { res->next = temp; res = res->next;}
            l1 = l1->next; l2=l2->next;
        }
        if(l1 || l2 ){
            ListNode* temp = (l1? l1:l2);
            while(temp){
                int res_temp = step? temp->val+1:temp->val;
                if(res_temp>=10){
                    res_temp = (res_temp%10);
                    step = true;
                }else{ step = false;
                }
                ListNode *new_nd = new ListNode(res_temp);
                if(start) { res_head = new_nd; res= new_nd; start=false;}
                else { res->next = new_nd; res = res->next;}
                temp = temp->next;
            }
        }
        if(step){
            res->next = new ListNode(1);
        }
        return res_head;
    }
};
