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
class BSTIterator {
    //stack to store the left element first
private:  stack<TreeNode*> st;
public:
    BSTIterator(TreeNode* root) {
        //store all thr left elemenst
        pushAll(root);
    }
    //return next number
    int next() {
        //the stack top will be the first element of inorder as it it [left root right]
        TreeNode* temp = st.top();
        st.pop();
        //if that node has any right store that as well to complete the inorder
        pushAll(temp->right);
        //return value of the nodes that come
        return temp->val;
    }
    //return if we have next number
    bool hasNext() {
        return !st.empty();
    }

private: 
    void pushAll(TreeNode* node){
        while(node != nullptr){
            st.push(node);
            node = node->left;
        }
}
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */