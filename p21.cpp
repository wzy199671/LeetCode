class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* x=new ListNode(0);
        ListNode* l=x;
        while(l1!=NULL||l2!=NULL)
        {
            if(l1==NULL)
            {
                x->next=new ListNode(l2->val);
                l2=l2->next;
            }
            else if(l2==NULL)
            {
                x->next=new ListNode(l1->val);
                l1=l1->next;
            }
            else if(l2->val<=l1->val)
            {
                x->next=new ListNode(l2->val);
                l2=l2->next;
            }
            else if(l1->val<=l2->val)
            {
                x->next=new ListNode(l1->val);
                l1=l1->next;
            }
            x=x->next;
        }
        return l->next;
    }
};