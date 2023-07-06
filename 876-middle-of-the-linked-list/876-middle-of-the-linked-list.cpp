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
    // ListNode* middleNode(ListNode* head) {
    //     ListNode* slow = head;
    //     ListNode* fast = head;
    //     while(fast != NULL && fast->next != NULL) { //makes sure linked list contains something and that it isnt at the end
    //         slow = slow->next;
    //         fast = fast->next->next;
    //     }

    //     return slow;
    // }

    //another solution
    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> list = {head};
        while(list.back()->next != NULL) { //makes sure linked list contains something and that it isnt at the end
            list.push_back(list.back()->next);
        }

        return list[list.size() / 2];
    }

};