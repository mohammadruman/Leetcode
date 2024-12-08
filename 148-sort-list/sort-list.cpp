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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        ListNode*t=head;
        while(t!=NULL){
            v.push_back(t->val);
            t=t->next;
        }
        sort(v.begin(),v.end());
        int i =0;
        ListNode*t1=head;
        while(t1!=NULL){
            t1->val= v[i];
            t1=t1->next;
            i++;
        }
        return head;
    }
};