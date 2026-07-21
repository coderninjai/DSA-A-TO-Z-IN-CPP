/*

class Solution {
public:

   void recursionRightView(TreeNode*node,int level,vector<int>&ans){
         if (!node) return;
        if(level==ans.size()) ans.push_back(node->val);
        recursionRightView(node->right,level+1,ans);
        recursionRightView(node->left,level+1,ans);
       
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        recursionRightView(root,0,ans);
        return ans;

    }
};
*/