/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessHead = new ListNode(0); // Dummy node for nodes less than x
        ListNode* lessPtr = lessHead; // Pointer for nodes less than x
        
        ListNode* greaterHead = new ListNode(0); // Dummy node for nodes greater than or equal to x
        ListNode* greaterPtr = greaterHead; // Pointer for nodes greater than or equal to x
        
        while (head != nullptr) {
            if (head->val < x) {
                lessPtr->next = head;
                lessPtr = lessPtr->next;
            } else {
                greaterPtr->next = head;
                greaterPtr = greaterPtr->next;
            }
            head = head->next;
        }
        
        greaterPtr->next = nullptr; // Set the next of the last node in the "greater" list to nullptr
        lessPtr->next = greaterHead->next; // Connect the "less" list to the "greater" list
        
        return lessHead->next; // Return the merged list starting from the first node after the dummy node
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessHead = new ListNode(0); // Dummy node for nodes less than x
        ListNode* lessPtr = lessHead; // Pointer for nodes less than x
        
        ListNode* greaterHead = new ListNode(0); // Dummy node for nodes greater than or equal to x
        ListNode* greaterPtr = greaterHead; // Pointer for nodes greater than or equal to x
        
        while (head != nullptr) {
            if (head->val < x) {
                lessPtr->next = head;
                lessPtr = lessPtr->next;
            } else {
                greaterPtr->next = head;
                greaterPtr = greaterPtr->next;
            }
            head = head->next;
        }
        
        greaterPtr->next = nullptr; // Set the next of the last node in the "greater" list to nullptr
        lessPtr->next = greaterHead->next; // Connect the "less" list to the "greater" list
        
        return lessHead->next; // Return the merged list starting from the first node after the dummy node
    }
};
