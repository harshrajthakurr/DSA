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
    ListNode* removeNodes(ListNode* head) {
        stack<int> st;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            while(!st.empty() and st.top()<temp->val)
                st.pop();
            st.push(temp->val);
            temp=temp->next;
        }
        while(!st.empty())
        {
            ListNode* n=new ListNode(st.top());
            n->next=temp;
            temp=n;
            st.pop();
        }
        return temp;
    }
};