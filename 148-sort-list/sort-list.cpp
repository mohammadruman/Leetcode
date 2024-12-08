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
ListNode*merge(ListNode*l1,ListNode*l2){
    ListNode dummy(0);
        ListNode* tail = &dummy;
        while(l1&&l2){
            if(l1->val>l2->val){
                tail->next= l2;
                l2=l2->next;
            }
            else{
                tail->next=l1;
                l1=l1->next;
            }
            tail=tail->next;
        }
        if(l1)tail->next=l1;
        else tail->next=l2;
        return dummy.next;
}
    ListNode* sortList(ListNode* head) {
         if (!head || !head->next) {
            return head;  // Base case: empty list or a single element
        }
       ListNode*slow = head;
       ListNode*fast = head->next;
       while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
       }
       ListNode* middle = slow->next;
       slow->next=NULL;
       //recursively call merge 
       ListNode*left = sortList(head);
        ListNode*right = sortList(middle);
        return merge(left,right);
    }
};