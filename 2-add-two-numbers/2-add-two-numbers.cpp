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
        ListNode* result = new ListNode();
        ListNode* ptr = result;
        int carry = 0;
        while(l1 != NULL || l2 != NULL) {
            int sum = 0 + carry;
            if(l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum/10; //if a carry exists, it returns it ex: 16/10 = 1
            sum = sum % 10; // 18 mod 10 = 8, basically just returns right side of sum
            ptr->next = new ListNode(sum); //sets next node to sum
            ptr = ptr->next;
        }
        if(carry == 1) { //if carry exists, just add another node with val 1 and have next ptr point to it
            ptr->next = new ListNode(1);
        }
        return result->next;
    }
};