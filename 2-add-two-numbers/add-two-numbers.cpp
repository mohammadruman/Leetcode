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
        ListNode*dummynode = new ListNode(-1);
            ListNode*curr = dummynode;
            int carry =0;
            while(l1||l2 || carry){
                int sum =carry;
                if(l1)
                    sum+=l1->val;
                if(l2)
                    sum+=l2->val;
                ListNode*newnode= new ListNode(sum%10);
                carry = sum/10;
                curr->next= newnode;
                curr=curr->next;
                if(l1)l1=l1->next;
                if(l2) l2= l2->next;

                if(carry){
                    ListNode*newcarry= new ListNode(carry);
                    curr->next= newcarry;
                    curr->next=NULL;
                }
            }
            return dummynode->next;
    }
};