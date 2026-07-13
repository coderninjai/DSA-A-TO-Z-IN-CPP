/*`
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>postorder;
        stack<TreeNode*>st1,st2;
        if(root==nullptr)return postorder;
        st1.push(root);

        while(!st1.empty()){
            TreeNode* node = st1.top();
        st1.pop();

        st2.push(node);

        if (node->left)
            st1.push(node->left);

        if (node->right)
            st1.push(node->right);

        }
        while(!st2.empty()){
            postorder.push_back(st2.top()->val);
            st2.pop();
        }
        return postorder;
    }
};
