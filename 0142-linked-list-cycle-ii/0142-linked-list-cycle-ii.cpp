/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        // unordered_map <ListNode*,int> hash;
        // ListNode* temp=head;
        // while(temp!=nullptr)
        // {
        //     hash[temp]+=1;
        //     if(hash[temp]==2)
        //     {
        //         return temp;
        //     }
            
        //     temp=temp->next;
        // }
        // return nullptr;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                slow=head;
                while(slow!=fast)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }
           
        }
        return nullptr;
    }
};