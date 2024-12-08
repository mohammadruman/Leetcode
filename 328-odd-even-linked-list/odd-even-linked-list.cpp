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
    ListNode* oddEvenList(ListNode* head) {
         if (!head || !head->next) return head; 
        ListNode* slow = head;
        ListNode* temp = head->next;
        vector<int> arr;
        while (slow != NULL && slow->next!=NULL) {
            arr.push_back(slow->val);
            slow = slow->next->next;
        }
        if(slow) arr.push_back(slow->val);
        while (temp != NULL && temp->next!=NULL) {
            arr.push_back(temp->val);
            temp = temp->next->next;
        }
        if(temp) arr.push_back(temp->val);
        temp= head;
        int i =0;
        while(temp!=NULL){
            temp->val = arr[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};