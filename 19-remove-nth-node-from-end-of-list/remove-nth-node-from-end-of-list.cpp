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
           //the intution is simple
           //take a fast pointer and slow pointer to head
           // run a loop till i<n+1 time and move fast as fast = fast->next
           //when loop end take a while loop and run till fast reaches NULL and increment slow as slow->next 
           //after fast reaches NULL  
           //slow->next = slw->next->next

           ListNode*slow = head;
           ListNode*fast = head;
           for(int i =0; i <n+1 ; i++){
             if(fast==NULL){
                return head->next;
            }
            fast = fast->next;
           }
           while(fast!=NULL){
            slow = slow->next;
            fast= fast->next;
           }
           slow->next= slow->next->next;
           return head;
    }
};