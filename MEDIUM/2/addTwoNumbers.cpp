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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int sum = 0;
        ListNode* newList = new ListNode(0);
        ListNode* nodePtr = newList;

        while (l1 != nullptr || l2 != nullptr) {
            sum = carry;
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            sum = sum % 10;
            nodePtr->next = new ListNode(sum);
            nodePtr = nodePtr->next;
        }
        
        if (carry != 0) {
            nodePtr->next = new ListNode(carry);
        }

        return newList->next;
    }
};
