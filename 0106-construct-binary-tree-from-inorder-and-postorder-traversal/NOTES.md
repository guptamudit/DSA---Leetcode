```
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode() : val(0), left(nullptr), right(nullptr) {}
*     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
*     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
* };
*/
class Solution {
public:
TreeNode* buildtree(vector<int>& inorder, vector<int>& postorder, int& postEnd,
int inStart, int inEnd, unordered_map<int,int> map){
if(inStart > inEnd) return nullptr;
TreeNode* curr = new TreeNode(postorder[postEnd]);
int pos = map[postorder[postEnd]];
postEnd--;
curr->right = buildtree(inorder, postorder, postEnd, pos+1, inEnd, map);
curr ->left = buildtree(inorder, postorder, postEnd, inStart, pos -1, map);
return curr;
}
TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
unordered_map<int,int> mp;
for(int i = 0; i < inorder.size(); i++){
mp[inorder[i]] = i;
}
int postEnd = postorder.size()-1;
return buildtree(inorder, postorder, postEnd, 0, inorder.size()-1, mp);
}
};
```