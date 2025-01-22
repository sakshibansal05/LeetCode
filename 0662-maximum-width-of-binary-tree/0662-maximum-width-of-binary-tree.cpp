class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        int ans = 0;
        queue<pair<TreeNode*, long long>> q; // Use long long for index
        q.push({root, 0});

        while (!q.empty()) {
            int size = q.size();
            long long min = q.front().second; // Base index to avoid overflow
            long long left, right;
            for (int i = 0; i < size; i++) {
                long long cur_id = q.front().second - min; // Normalize index
                TreeNode* node = q.front().first;
                q.pop();
                if (i == 0) left = cur_id;
                if (i == size - 1) right = cur_id;
                if (node->left) q.push({node->left, cur_id * 2 + 1});
                if (node->right) q.push({node->right, cur_id * 2 + 2});
            }
            ans = max(ans, (int)(right - left + 1)); // Cast to int for the result
        }
        return ans;
    }
};
