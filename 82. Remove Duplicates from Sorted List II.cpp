class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        ListNode* current = head;
        
        while(current != nullptr) {
            while(current->next != nullptr && current->val == current->next->val) {
                current = current->next;
            }
            if(prev->next == current) {
                prev = prev->next;
            } else {
                prev->next = current->next;
            }
            current = current->next;
        }
        return dummy.next;
    }
};
//tc=O(N)
//sc=1
