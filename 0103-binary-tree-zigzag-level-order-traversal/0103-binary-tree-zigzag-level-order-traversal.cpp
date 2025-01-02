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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;

        queue<TreeNode*> nodequeue;
        nodequeue.push(root);
        bool lefttoR=true;

        while(!nodequeue.empty()){
            int size=nodequeue.size();
            vector<int> row(size);
            for(int i=0;i<size;i++){
                TreeNode* node=nodequeue.front();
                nodequeue.pop();

                int ind=(lefttoR)? i:(size-1-i);
                row[ind]=node->val;
                if(node->left){
                    nodequeue.push(node->left);
                }
                if(node->right){
                    nodequeue.push(node->right);
                }
            }
            lefttoR=!lefttoR;
            result.push_back(row);
        }
        return result;
    }
};