/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* temp, int val) {
        if(temp == NULL) return new TreeNode(val);
        
        TreeNode* root = temp;
        while(true){
            if(val < root->val){
                if(root->left == NULL){
                    TreeNode* newnode = new TreeNode(val);
                    root->left = newnode;
                    break;
                }
                root = root->left;
                
            }else{
                if(root->right == NULL){
                    TreeNode* newnode = new TreeNode(val);
                    root->right = newnode;
                    break;
                }
                root = root->right; 
            }           
        }
        
        return temp;
    }
};