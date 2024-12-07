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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
       int middle = count/2;
        
         ListNode* t = head;
        while (middle--) {
            t = t->next;
        }

        // Step 4: Return the middle node
        return t;
    }
};