/*************************************************************************
	> File Name: reverseList.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年06月07日 星期二 20时37分55秒
 ************************************************************************/

/*
 * Definition for Singly-linked list.
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
    ListNode* reverseList(ListNode* head)
    {
        if(head == NULL)
            return NULL;
        else if(head->next == NULL)
        {
            return head;
        }
        else if(head->next->next == NULL)
        {
            ListNode *p = head->next;
            p->next = head;
            head->next = NULL;
            return p;
        }
        else
        {
            ListNode *f = head, *p = head->next, *n = p->next;
            head->next = NULL;
            while(n!=NULL)
            {
                //rever
                p->next = f;
                f = p;
                p = n;
                n = n->next;
            }
            p->next = f;
            return p;
        }
    }
};
