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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //iterative approach: 
        //         ListNode* mergedList = new ListNode();
//         ListNode* ptr = mergedList;
        
//         while(list1 && list2){
//             if(list1->val <= list2->val){
//                 mergedList->next = new ListNode(list1->val);
//                 list1 = list1->next;
//             }
//             else{
//                 mergedList->next = new ListNode(list2->val);
//                 list2 = list2->next;
//             }
//             mergedList = mergedList->next;
//         }
//         while(list1){
//             mergedList->next = new ListNode(list1->val);
//             list1 = list1->next;
//             mergedList = mergedList->next;
//         }
//         while(list2){
//             mergedList->next = new ListNode(list2->val);
//             list2 = list2->next;
//             mergedList = mergedList->next;
//         }
        
        
//         return ptr->next;

        //recursion
        if(list1 == NULL) {
            return list2;
        }
        if(list2 == NULL) {
            return list1;
        }
        
        if(list1->val <= list2->val) {
            list1->next = mergeTwoLists(list1->next, list2); //if l1 val is greater than or equal to l2 val, set the l1->next to a recursive call of mergeTwoLists, but this time we take in l1->next and l2 to compare those values and repeat until we hit basecase. This will iteratively set l1->next to a new list where we do l1->next to get to next node.
            return list1;
        }
        
        else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
        
    }
};