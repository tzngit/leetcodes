/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
        ListNode *removeNthFromEnd(ListNode *head, int n) {
                if (head == NULL)
                        return NULL;

                int nLength = 0;
                ListNode *p = head;
                while (p != NULL) {
                        nLength++;
                        p = p->next;
                }
                if (n == nLength)
                        return head->next;

                p = head;
                for (int i = 0; i<nLength; ++i,p = p->next) {
                        if (p->next == NULL)
                                return NULL;
                        else if (i + 1 + n == nLength) {
                                p->next = p->next->next;
                                return head;
                        }
                }
        }
};
