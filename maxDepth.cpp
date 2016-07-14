#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

int maxDepth(TreeNode* root)
{
    if(NULL==root)
        return 0;
    if((NULL==root->left) && (NULL==root->right))
        return 1;

    int lm = maxDepth(root->left), rm = maxDepth(root->right);

    return (lm>rm?lm+1:rm+1);
}

int main()
{
    TreeNode root(1), one(2), two(3);
    root.left = &one;
    one.right = &two;

    cout << "maxDepth:" << maxDepth(&root) << endl;

    return 0;
}
