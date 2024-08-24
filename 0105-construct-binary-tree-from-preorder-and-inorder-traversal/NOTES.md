​
preStart = 1, inStart = 0, inEnd = 0
Creates a new TreeNode with value 9.
pos = mp[9] = 0
Recursively builds the left subtree with preStart = 2, inStart = -1, inEnd = -1 (empty).
Recursively builds the right subtree with preStart = 2, inStart = 1, inEnd = 0 (empty).
​
​
Third recursive call (right subtree):
​
preStart = 2, inStart = 2, inEnd = 4
Creates a new TreeNode with value 20.
pos = mp[20] = 3
Recursively builds the left subtree with preStart = 3, inStart = 2, inEnd = 2.
Recursively builds the right subtree with preStart = 4, inStart = 3, inEnd = 4.
​
​
Fourth and fifth recursive calls (left and right subtrees of 20):
​
Both calls result in empty subtrees.
The final constructed binary tree is:
​
3
/
9
\
20
/ \
15  7