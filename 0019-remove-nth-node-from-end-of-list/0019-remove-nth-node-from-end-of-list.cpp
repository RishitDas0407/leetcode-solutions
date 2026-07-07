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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        // ListNode* temp=head;
        // int count=0;
        // while(temp!=nullptr)
        // {
        //     count++;
        //     temp=temp->next;
        // }
        // if(count==n)
        // {
        //     return head->next;
        // }
        // int a =count-n;
        // temp=head;
        // for(int i=1;i<a;i++)
        // {
        //     temp=temp->next;
        // }
        // ListNode* delnode=temp->next;
        // temp->next=temp->next->next;
        // delete delnode;
        // return head;

        ListNode* fast=head;

        for(int i=0;i<n;i++)
        {
            fast=fast->next;
        }
        if(fast==nullptr)
        {
            return head->next;
        }
        ListNode* slow=head;
        while(fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* delnode=slow->next;
        slow->next=slow->next->next;
        delete delnode;
        return head;
    }
};