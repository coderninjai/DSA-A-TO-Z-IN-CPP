/*
class Solution {

public:
    int maxDepth(TreeNode* root, int &maxi) {

        if (root == NULL)
            return 0;
        int lh = maxDepth(root->left,maxi);
        int rh = maxDepth(root->right,maxi);
        maxi = max(maxi, lh + rh);

        return 1 + max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        maxDepth(root, maxi);
        return maxi;
    }
};
*/