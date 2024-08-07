class Solution {
public:
bool traverse(TreeNode* root,TreeNode* root2)
{
    if(root==NULL && root2==NULL)
    {
        return true;
    }
    if(root==NULL && root2!=NULL)
    {
        return false;
    }
     if(root2==NULL && root!=NULL)
    {
        return false;
    }
    if(root->val==root2->val && traverse(root->left,root2->right) && traverse(root->right,root2->left))
    {
        return true;
    }
    return false;
}
    bool isSymmetric(TreeNode* root) {
       return traverse(root->left,root->right) ;
    }
};