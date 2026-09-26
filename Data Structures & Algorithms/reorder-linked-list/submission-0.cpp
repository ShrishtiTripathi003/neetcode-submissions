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
    void reorderList(ListNode* head) {
        ListNode* l1=head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* l2=slow->next;
        slow->next=NULL;
        ListNode* prev=NULL;
        while(l2!=NULL)
        {
            ListNode* nex=l2->next;
            l2->next=prev;
            prev=l2;
            l2=nex;
        }
        //prev contains head of l2 
        while(prev!=NULL)
        {
           ListNode* first=l1->next;
           ListNode* sec=prev->next;
           l1->next=prev;
           prev->next=first;
           l1=first;
           prev=sec;
        }
    }
};
