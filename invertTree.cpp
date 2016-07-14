#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

TreeNode* invertTree(TreeNode* root)
{
    if(NULL == root)
        return root;

    TreeNode *lt = invertTree(root->left), *rt = invertTree(root->right);
    root->left = rt;
    root->right = lt;

    return root;
}

int main()
{
    TreeNode root(0), left(1), right(2);
    root.left = &left;
    root.right = &right;

    cout << "BEFORE  root: " << root.val << "\tleft: " << root.left->val << "\tright: " << root.right->val << endl;
    TreeNode *p = invertTree(&root);
    cout << "AFTER   root: " << root.val << "\tleft: " << root.left->val << "\tright: " << root.right->val << endl;

    return 0;
}
