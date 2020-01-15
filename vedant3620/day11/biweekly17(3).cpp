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
    int sumEvenGrandparent(TreeNode* root) {
        int ans=0;
            if(root==NULL){
                return 0;
            }
            if(root->val%2==0){
                if(root->left!=NULL){
                    if(root->left->left!=NULL){
                        ans+=root->left->left->val;
                    }
                    if(root->left->right!=NULL){
                        ans+=root->left->right->val;
                    }
                }
                if(root->right!=NULL){
                    if(root->right->left!=NULL){
                        ans+=root->right->left->val;
                    }
                    if(root->right->right!=NULL){
                        ans+=root->right->right->val;
                    }
                }
            }
            
        
        return ans+sumEvenGrandparent(root->left)+sumEvenGrandparent(root->right);
    }
};
