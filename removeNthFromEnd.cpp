/*************************************************************************
	> File Name: removeNthFromEnd.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年06月07日 星期二 20时13分09秒
 ************************************************************************/

/*
 * Definition for singly-linked list.
 * struct ListNode
 * {
 *      int val;
 *      ListNode *next;
 *      ListNode(int x) : val(x), next(NULL) { }
 * };
 */
class Solution
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode *f = head, *s = head;
        for(int i=0;i<n;i++)
        {
            f = f->next;
        }
        //delete the first node
        if(NULL == f)
            return head->next;
        while(NULL != f->next)
        {
            f = f->next;
            s = s->next;
        }
        s->next = s->next->next;

        return head;
    }
};
