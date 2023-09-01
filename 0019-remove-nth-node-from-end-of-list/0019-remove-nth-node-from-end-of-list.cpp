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
        int count = 0;
        int i = 1;
        ListNode* iter = head; //so that we aren't using the header directly
        while(iter != NULL) {
            iter = iter->next;
            count++;
        }
        
        if(count == n) { //head itself = deleted
            return head->next;
        }
        for(iter = head; i < count - n; i++) { //iterate count-n nodes to get to nth node from end of list
            iter= iter->next;
        }
        
        iter->next = iter->next->next;
        
        return head;
        
    }
};