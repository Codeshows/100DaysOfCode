// https://www.interviewbit.com/problems/level-order/
// Time Complexity: O(N)


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int> > ans;
    queue<TreeNode*> q;
    q.push(A);
    int level = 0;
    while(!q.empty()){
        vector<int> v;
        int n = q.size();
        while(n--){
            TreeNode* temp = q.front();
            v.push_back(temp->val);
            q.pop();
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
        ans.push_back(v);
        level++;
    }
    return ans;
}
