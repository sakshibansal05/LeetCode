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
int sum(TreeNode* node, int &maxi){
    if(node==NULL) return 0;
    int leftSum=max(0,sum(node->left,maxi));
    int rightSum=max(0,sum(node->right,maxi));
    maxi=max(maxi,leftSum+rightSum+node->val);
    return max(leftSum,rightSum)+node->val;
}
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        sum(root,maxi);
        return maxi;
    }
};