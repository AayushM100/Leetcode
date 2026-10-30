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
    ListNode* oddEvenList(ListNode* head) {
       if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = head->next;

        while (even && even->next) {
            //changing the links
            odd->next = odd->next->next;
            even->next = even->next->next;

            //move the pointers
            odd = odd->next;
            even = even->next;
        }

        //linking the even nodes head to last node of the odds
        odd->next = evenHead;

        return head; 
    }
};