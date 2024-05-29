class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int> v;
        while(temp != NULL)
        {
            v.push_back(temp-> val);
            temp = temp-> next;
        }
        sort(v.begin(),v.end());
        ListNode* newHead = new ListNode(0);
        temp = newHead;
        for(int num : v)
        {
            temp-> next = new ListNode(num);
            temp = temp-> next;
        }
        ListNode* result = newHead-> next;
        delete newHead;
        return result;
    }
};//time complexity=O(nlogn)
