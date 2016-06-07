/*************************************************************************
	> File Name: addTwoNumbers.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年06月07日 星期二 21时04分15秒
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode head(0);
        ListNode *p = &head;
        int high = 0;
        int low = 0;
        while((l1!=NULL) || (l2!=NULL) || high)
        {
            low = high;
            if(l1)
                low += l1->val;
            if(l2)
                low += l2->val;
            ListNode *temp = new ListNode(low % 10);
            p->next = temp;
            p = p->next;
            high = low / 10;
            if(l1)
                high += l1->val;
            if(l2)
                high += l2->val;
            high = high / 10;
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
        }
        return head.next;
    }
};
