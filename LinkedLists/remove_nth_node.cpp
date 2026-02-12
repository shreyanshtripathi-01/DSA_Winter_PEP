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
        ListNode* t = new ListNode(0, head);
        ListNode* l = t;
        ListNode* r = t;

        
        for (int i = 0; i <= n; ++i) {
            r = r->next;
        }

        while (r != nullptr) {
            r = r->next;
            l = l->next;
        }

        ListNode* toDelete = l->next;
        l->next = l->next->next;
        delete toDelete;

        ListNode* newHead = t->next;
        delete t;
        return newHead;
    }
};
