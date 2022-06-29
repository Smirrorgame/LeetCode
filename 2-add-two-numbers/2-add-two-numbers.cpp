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
            carry = sum / 10;
            ListNode *node = new ListNode(sum % 10);
            temp->next = node;
            temp = temp->next;
        }

        return dummy->next;
    }
};