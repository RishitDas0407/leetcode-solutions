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
    ListNode* oddEvenList(ListNode* head) 
    {
        // ListNode* temp=head;
        // vector <int> arr;
        // int a=0;
        // temp=head;
        // while(temp!=nullptr)
        // {
        //     if(a%2==0)
        //     {
        //         arr.push_back(temp->val);
        //     }
        //     a++;
        //     temp=temp->next;
        // }
        // a=0;
        // temp=head;
        // while(temp!=nullptr)
        // {
        //     if(a%2!=0)
        //     {
        //         arr.push_back(temp->val);
        //     }
        //     a++;
        //     temp=temp->next;
        // }
        // temp=head;
        // int i=0;
        // while(temp!=nullptr)
        // {
        //     temp->val=arr[i];
        //     i++;
        //     temp=temp->next;
        // }
        // return head;

        if(head==nullptr || head->next==nullptr)
        {
            return head;
        }
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenhead=head->next;
        while(even!=nullptr && even->next!=nullptr)
        {
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=evenhead;
        return head;
    }
};