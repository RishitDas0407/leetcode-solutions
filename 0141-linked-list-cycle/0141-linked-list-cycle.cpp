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
    bool hasCycle(ListNode *head) 
    {
        // ListNode* temp=head;
        // unordered_map <ListNode*,int> map;
        // while(temp!=nullptr)
        // {
        //     if (map.count(temp)==1)
        //     {
        //         return true;
        //     }
        //     else
        //     {
        //         map[temp]+=1;
        //     }
        //     temp=temp->next;
        // }
        // return false;

        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                return true;
            }
        }
        return false;
    }
};