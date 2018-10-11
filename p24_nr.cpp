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
    ListNode* swapPairs(ListNode* head) {
        if (!head) return head;
        ListNode* p;
        ListNode* q;
        ListNode* temp;
        p=head;
        q=head->next;
        if(head->next) head=head->next;
        while(q!=NULL&&q->next!=NULL)
        {   
            if(q->next->next==NULL)
            {
                p->next=q->next;
                q->next=p;
                q=p->next->next;
                break;
            }
            else
            {
                p->next=p->next->next->next;
                temp=q->next;
                q->next=p;
                p=temp;
                q=p->next;
            }     
        }
        if(q!=NULL)
        {
            p->next=NULL;
            q->next=p;
        }
        return head;
    }
};