class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        ListNode *hare, *tortoise;
        hare=tortoise=head;
        while(hare && hare->next)
        {
            hare = hare->next->next;
            tortoise=tortoise->next;
        
        }

    return tortoise;
    }
};