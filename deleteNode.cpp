#include <iostream>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void deleteNode(ListNode* node)
{
    if(node == NULL)
        return;
    node->val = node->next->val;
    node->next = node->next->next;
}

int main()
{
    ListNode one(1), two(2), three(3), four(4);
    one.next = &two;
    two.next = &three;
    three.next = &four;

    deleteNode(&three);
    for(auto x = &one;x!=NULL; x = x->next)
    {
         cout << x->val << "\t";
    }
    cout << endl;

    return 0;
}
