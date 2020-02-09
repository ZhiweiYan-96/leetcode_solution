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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> to_visit;
        queue<int> depth;
        to_visit.push(root);
        depth.push(0);
        int res=0;
        int cur_depth=0;
        while(!to_visit.empty()){
            int node_depth = depth.front();
            depth.pop();
            TreeNode* node = to_visit.front();
            to_visit.pop();
            if(node_depth>cur_depth){
                    cur_depth = node_depth;
                    res = 0;
            }
            if((node->left || node->right) && (cur_depth == node_depth)){
                //do not add res, push children in queque and increment cur_depth
                if(node->left){
                    to_visit.push(node->left);
                    depth.push(cur_depth+1);
                }
                if(node->right){
                    to_visit.push(node->right);
                    depth.push(cur_depth+1);
                }
            }
            res += node->val;
        }
        return res;
    }
};
