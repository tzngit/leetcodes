
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL)
            return NULL;
        ListNode *pA = headA;
        ListNode *pB = headB;

        while(pA->next && pB->next) {
            pA = pA->next;
            pB = pB->next;
        }

        if(pA->next != NULL && pB->next == NULL) {
            while(pA->next) {
                headA = headA->next;
                pA = pA->next;
            }
        }

        if(pB->next != NULL && pA->next == NULL) {
            while(pB->next) {
                headB = headB->next;
                pB = pB->next;
            }
        }
        while(headA && headB) {
            if(headA->val == headB->val)
                return headA;
            else {
                headA = headA->next;
                headB = headB->next;
            }
        }
        if(headA == NULL || headB == NULL)
            return NULL;
    }
};
