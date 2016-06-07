/*************************************************************************
	> File Name: reverseBetween.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年06月07日 星期二 20时33分22秒
 ************************************************************************/

/*
 * Definition of singly-linked list.
 * struct ListNode
 * {
 *      int va;
 *      ListNode *node;
 *      ListNode(int x) : val(x), next(NULL) { }
 * };
 */
class Solution
{
public:
    ListNode* reverseBetween(ListNode* head, int m, int n)
    {
        if(m==n)
            return head;
        else
        {
            ListNode *b = head, *p = NULL, *t = NULL;
            int count = 1;
            while(count < (m-1))
            {
                b = b->next;
                count ++;
            }
            p = b->next;
            t = p;
            count ++;
            while(count < n)
            {
                b->next = p->next;
                p->next = p->next->next;
                b->next->next = t;
                t = b->next;
                count ++;
            }
            if(m==1)
            {
                head = t;
                b->next = p->next;
                p->next = b;
            }
            return head;
        }
    }
};
