/*


class Solution {
public:
   void preorderTraversalrec(TreeNode* root, vector<int> &ans) {
        if (root == nullptr) {
            return;
        }
        ans.push_back(root->val);
        preorderTraversalrec(root->left,ans);
        preorderTraversalrec( root->right, ans);
      
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
         preorderTraversalrec(root, ans);
        return ans;
    }
};
*/