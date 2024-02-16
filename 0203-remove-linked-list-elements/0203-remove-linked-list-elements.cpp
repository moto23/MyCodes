class Solution {
public:
    ListNode* removeElements(ListNode* head, int a) {
        ListNode* curr=head;
        if(curr==NULL){
            return NULL;
        }
        if(curr->next==NULL){
            if(curr->val==a){
                return NULL;
            }else{
                return head;
            }
        }
        if(curr->next->val==a){
            curr->next = curr->next->next;
        }else{
            curr = curr->next;
        }
        ListNode* b= removeElements(curr, a);


        if(head->val==a){
            ListNode* n = head->next;
            head = n;
        }
        return head;
    }
};