#include "../defines/data.h"

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) {
            return NULL;
        }

        if (head->next == NULL) {
            delete head;
            return NULL;
        }

        int step = 0;
        ListNode* right = head;
        while (right && step < n+1) {
            right = right->next;
            step++;
        }

        if (right == NULL) {
            if (step == n) {
                ListNode* newHead = head->next;
                delete head;
                return newHead;
            }

            ListNode* tmp = head->next;
            head->next = tmp->next;
            delete tmp;
            return head;
        }

        ListNode* left = head;
        while (right) {
            right = right->next;
            left = left->next;
        }

        ListNode* tmp = left->next;
        left->next = tmp->next;
        delete tmp;
        return head;
    }
};
