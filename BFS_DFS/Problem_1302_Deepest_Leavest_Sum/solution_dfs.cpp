class Solution {
private:
    int total;
    int max_depth;
public:
    void DFS(TreeNode *root,int depth){
        if(depth<max_depth){
            //pass
        }else if(depth == max_depth){
            total += root->val;
        }else if(depth > max_depth){
            total = root->val;
            max_depth = depth;
        }
        if(root->left)
            DFS(root->left,depth+1);
        if(root->right)
            DFS(root->right,depth+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        max_depth =0;
        total =0;
        DFS(root,0);
        return total;
    }
};
