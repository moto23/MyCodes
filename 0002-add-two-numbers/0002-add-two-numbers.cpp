class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int addCnt = 0) {
        if(l1==nullptr && l2==nullptr){
            if(addCnt) return new ListNode(addCnt);
            else return nullptr;
        }
        
        int sum = 0;
        if(l1 == nullptr || l2 == nullptr){
            ListNode* temp = l1? l1: l2;
            sum = temp->val + addCnt;
            temp->val = sum%10;
            temp->next = addTwoNumbers(temp->next, nullptr, sum/10);
            return temp;
        }
        sum = l1->val + l2->val + addCnt;
        l1->val = sum%10;
        l1->next = addTwoNumbers(l1->next, l2->next, sum/10);
        return l1;
    }
};