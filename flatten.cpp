/*************************************************************************
	> File Name: flatten.cpp
	> Author: He Jieting
    > mail: rambo@mail.ustc.edu.cn
	> Created Time: 2016年05月17日 星期二 14时41分36秒
 ************************************************************************/

#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) { }
};

void flatten(TreeNode *root)
{
    if(NULL == root)
    {
        return;
    }

    flatten(root->left);
    flatten(root->right);

    TreeNode *p = root->left;
    if(NULL==p)
        return;
    while(p->right)
        p = p->right;
    p->right = root->right;
    root->right = root->left;
    root->left = NULL;
}

void print(TreeNode* root)
{
    if(root==NULL)
        return;
    while(root)
    {
        cout << root->val << "==>";
        root = root->right;
    }
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);

    flatten(root);

    print(root);
    return 0;
}

