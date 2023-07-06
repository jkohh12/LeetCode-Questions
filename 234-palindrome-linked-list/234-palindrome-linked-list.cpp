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
    bool isPalindrome(ListNode* head) {
        vector<int> list;

        ListNode *currentNode = head;
        while(currentNode != NULL) {
            list.push_back(currentNode->val);
            currentNode = currentNode->next; 
        }

        int front = 0;
        int back = list.size()-1;
        while (front < back) {
            if(list[front] != list[back]) {
                return false;
            } 
            front++;
            back--;
        }
        return true;
    }
};