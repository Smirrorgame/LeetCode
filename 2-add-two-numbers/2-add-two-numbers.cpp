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
    ListNode* addTwoNumbers(ListNode* l0, ListNode* l1) {
        int carry = 0;
        ListNode *dummy = new ListNode();
        ListNode *temp = dummy;
        while (l0 != nullptr || l1 != nullptr || carry)
        {
            int sum = 0;
            if (l0 != nullptr)
            {
                sum += l0->val;
                l0 = l0->next;
            }
            if (l1 != nullptr)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            sum += carry;
            int newVal = sum % 10;
            carry = (int)(sum / 10);
            ListNode *node = new ListNode(newVal);
            temp->next = node;
            temp = temp->next;
        }

        return dummy->next;
    }
};