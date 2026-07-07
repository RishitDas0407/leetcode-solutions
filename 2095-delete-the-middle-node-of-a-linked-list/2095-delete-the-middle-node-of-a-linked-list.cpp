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
    ListNode* deleteMiddle(ListNode* head) 
    {
        // if(head==nullptr || head->next==nullptr)
        // {
        //     delete head;
        //     return nullptr;
        // }
        // int count=0;
        // ListNode* temp=head;
        // while(temp!=nullptr)
        // {
        //     count++;
        //     temp=temp->next;
        // }
        // int num=count/2;
        // temp=head;
        // for(int i=1;i<num;i++)
        // {
        //     temp=temp->next;
        // }
        // ListNode* delnode=temp->next;
        // temp->next=temp->next->next;
        // delete delnode;
        // return head;

        if(head==nullptr || head->next==nullptr)
        {
            return nullptr;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=nullptr;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* delnode=prev->next;
        prev->next=prev->next->next;
        delete delnode;
        return head;
    }
};