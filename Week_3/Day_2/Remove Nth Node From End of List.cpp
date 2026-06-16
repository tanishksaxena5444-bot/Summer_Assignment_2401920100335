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
// ListNode* reverseList(ListNode* head) {
//    ListNode* prev = NULL;
//     ListNode* curr = head;
//     ListNode* next = NULL;

//     while (curr != NULL) {
//         next = curr->next;   // store next node
//         curr->next = prev;   // reverse current node's pointer
//         prev = curr;         // move prev one step
//         curr = next;         // move curr one step
//     }
//     return prev; // new head
// }
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         reverseList(head);
//         ListNode* curr=head;
//        int i=1;
//         while(curr){
//             if(i==n){
//               if (curr->next != NULL) {
//         Node* temp = curr->next;
//         curr->next = curr->next->next;
//         delete temp;
//     }

//             }
//             else {
//                 i++;
//                 curr=curr->next;
//             }
//         }
//     }
   ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy=new ListNode(0);
    dummy->next=head;
    ListNode* fast=dummy;
    ListNode* slow=dummy;
    for(int i=0;i<=n;i++){
        fast=fast->next;
    }
    while(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
     ListNode* temp=slow->next;
     slow->next=slow->next->next;
     delete temp;
     
     head=dummy->next;
     delete dummy;
     return head;
   }
};