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
    bool isPalindrome(ListNode* head)
    {
        // stack <int> s;
        // ListNode* temp=head;
        // while(temp!=nullptr)
        // {
        //     s.push(temp->val);
        //     temp=temp->next;
        // }
        // temp=head;
        // while(temp!=nullptr)
        // {
        //     if(s.top()!=temp->val)
        //     {
        //         return false;
        //     }
        //     s.pop();
        //     temp=temp->next;
        // }
        // return true;

        if(head==nullptr || head->next==nullptr)
        {
            return true;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=nullptr && fast->next->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=nullptr;
        ListNode* curr=slow->next;
        while(curr!=nullptr)
        {
            ListNode* nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        ListNode* newhead=prev;
        ListNode* first=head;
        ListNode* second=newhead;
        while(second!=nullptr)
        {
            if(first->val!=second->val)
            {
                return false;
            }
            first=first->next;
            second=second->next;
        }
        return true;
    }
};