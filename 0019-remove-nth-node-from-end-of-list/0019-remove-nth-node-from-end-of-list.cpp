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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head == NULL)
            return head;

        int len = 0;
        ListNode* temp = head;

        while(temp != NULL) {
            len++;
            temp = temp->next;
        }

        int pos = len - n + 1;

        if(pos == 1) {
            head = head->next;
            delete temp;
            return head;
        }

        temp = head;
        ListNode* prev = NULL;
        int cnt = 1;

        while(temp != NULL) {

            if(cnt == pos) {
                prev->next = prev->next->next;
                delete temp;
                break;
            }

            prev = temp;
            temp = temp->next;
            cnt++;
        }

        return head;
    }
};