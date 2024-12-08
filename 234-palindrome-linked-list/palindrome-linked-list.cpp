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
      ListNode*t = head;
      ListNode*a = head;
      stack<int>st;
      int n=0;
      while(t!=NULL){
        st.push(t->val);
        t=t->next;
        n++;
      }  
      while(a->next!=NULL){
        int top = st.top();
        if(a->val!=top)return false;
        st.pop();
        a=a->next;
      }
      return true;
      

    }

};