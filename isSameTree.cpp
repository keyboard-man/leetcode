#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isSameTree(TreeNode *p, TreeNode *q)
{
    if((NULL == p) && (NULL == q))
        return true;
    if((p==NULL && q!=NULL) || (p!=NULL && q==NULL) || (p->val != q->val))
        return false;
    if(isSameTree(p->left,q->left) && isSameTree(p->right,q->right))
        return true;
    else
        return false;
}

int main()
{
    TreeNode root(0);

    TreeNode o(0);

    cout << isSameTree(&root,&o) << endl;

    return 0;
}
