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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int t=1;
        int max=INT_MAX;
        ListNode* p= new ListNode(0);
        ListNode* head=p;
        ListNode* q;
        int index;
        while(t)
        {
            t=0;
            max=INT_MAX;
            for(int i=0;i<lists.size();i++)
            {
                if(lists[i]!=NULL)
                {
                    if(max>lists[i]->val)
                    {
                        max=lists[i]->val;
                        q=lists[i];
                        index=i;
                    }
                    t=1;
                }
            }
            if(t)
            {   
                lists[index]=lists[index]->next;
                p->next=q;
                p=p->next;
            }
        }
        head=head->next;
        return head;
    }
    
};