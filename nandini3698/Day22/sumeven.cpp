/*Given a binary tree, return the sum of values of nodes with even-valued grandparent.  
(A grandparent of a node is the parent of its parent, if it exists.)
If there are no nodes with an even-valued grandparent, return 0.*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int s=0;
    int sumEvenGrandparent(TreeNode* root) {
        if(root==NULL)
            return 0;
        if((root->val)%2==0){
            if(root->left && root->left->left)
                s+=(root->left->left->val);
            if(root->left && root->left->right)
                s+=(root->left->right->val);
            if(root->right && root->right->left)
                s+=(root->right->left->val);
            if(root->right && root->right->right)
                s+=(root->right->right->val);
        }
        sumEvenGrandparent(root->left);
        sumEvenGrandparent(root->right);

        return s;
    }
};