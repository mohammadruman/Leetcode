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
    ListNode* reverseList(ListNode* head) {
        stack<int>st;
        ListNode*temp = head;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        ListNode*t1= head;
        while(!st.empty()){
            int node= st.top();
            t1->val= node;
            st.pop();
            t1= t1->next;
        }
        return head;
    }
};