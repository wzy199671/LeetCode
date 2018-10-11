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
        if (head==NULL) return head;  
        if (head->next==NULL) return head;
        ListNode* p;
        ListNode* q;
        
        p=head;
        q=head->next->next;
        head=head->next;
        head->next=p;
        p->next=swapPairs(q);
        
        return head;
    }
};