class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) {
            return head;
        }        
        int length = 0;
        ListNode* t = head;
        while (t != NULL) {
            t = t->next;
            length++;
        }        
        ListNode* d = new ListNode(0);
        d->next = head;        
        ListNode* pre = d;
        ListNode* cur;
        ListNode* nex;        
        while (length >= k) {
            cur = pre->next;
            nex = cur->next;
            for (int i = 1; i < k; i++) {
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;
            }
            pre=cur;
            length-=k;
        }     
        return d->next;
    }
};
