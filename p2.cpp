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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a,b,carry;
        a=l1->val;
        b=l2->val;
        l1=l1->next;
        l2=l2->next;
        carry=(a+b)/10;
        ListNode *head=new ListNode((a+b)%10);
        ListNode *p,*l;
        p=head;
        while(l1!=NULL ||l2!=NULL)
        {
            if(l1!=NULL)
            {
				a=l1->val;
				l1=l1->next;
			}
            else a=0;
			
            if(l2!=NULL)
            {
				b=l2->val;
				l2=l2->next;
			}
            else b=0;
			
            l=new ListNode((a+b+carry)%10);
            carry=(a+b+carry)/10;
            p->next=l;
            p=p->next;
        }
        if(carry!=0)
        {
			l=new ListNode(1);
			p->next=l;
			p=p->next;
		}
        return head;
    }
};