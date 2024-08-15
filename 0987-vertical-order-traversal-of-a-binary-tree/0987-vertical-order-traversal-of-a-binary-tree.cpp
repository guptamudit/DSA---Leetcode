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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        //map to store nodes based on vertical and level info
        map<int, map<int , multiset<int>>> nodes;
        
        //queue for bfs, each element have its pair of
        //vertical and level info
        queue<pair<TreeNode*, pair<int,int>>> todo;
        
        //push the root with initial
        //vertical and level val(0,0)
        todo.push({root, {0,0}});
        
        
        //BFS
        while(!todo.empty()){
            
            // Retrieve the node and its vertical
            // and level information from
            // the front of the queue
            auto p = todo.front();
            todo.pop();
            TreeNode* temp = p.first;
            
            // Extract the vertical and level information
            // x -> vertical
            int x = p.second.first;  
            // y -> level
            int y = p.second.second;
            
            
            // Insert the node value into the
            // corresponding vertical and level
            // in the map
            nodes[x][y].insert(temp->val);
            
            
             // Process left child
            if(temp->left){
                todo.push({
                    temp->left,
                    {
                        // Move left in
                        // terms of vertical
                        x-1, 
                        // Move down in
                        // terms of level
                        y+1  
                    }
                });
            }
            
            // Process right child
            if(temp->right){
                todo.push({
                    temp->right, 
                    {
                        // Move right in
                        // terms of vertical
                        x+1, 
                        // Move down in
                        // terms of level
                        y+1  
                    }
                });
            }
        }
        
        // Prepare the final result vector
        // by combining values from the map
        vector<vector<int>> ans;
        for(auto p: nodes){
            vector<int> col;
            for(auto q : p.second){
                // Insert node values
                // into the column vector
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
        
            // Add the column vector
            // to the final result
            ans.push_back(col);
        }
        
        return ans;
        
    }
};