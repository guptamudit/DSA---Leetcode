void solve(TreeNode* r)
{
if(!r)
return;
solve(r->left);
pq.push(r->val);
solve(r->right);
}