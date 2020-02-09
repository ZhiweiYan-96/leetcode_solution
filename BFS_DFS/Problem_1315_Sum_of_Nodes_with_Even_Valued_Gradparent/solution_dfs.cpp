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
    int sumEvenGrandparent(TreeNode* root) {
        //DFS
        return DFS(root);

    }
    int DFS(TreeNode * root){
        //mid left right
        if(root==NULL)
            return 0;
        else{
            int subSum=0;
            //visit mid
            if( (root->val)%2 ==0 ){
                //left left
                if(root->left && root->left->left){
                    subSum += root->left->left->val;
                }
                if(root->left && root->left->right){
                    subSum += root->left->right->val;
                }
                if(root->right && root->right->left){
                    subSum += root->right->left->val;
                }
                if(root->right && root->right->right){
                    subSum += root->right->right->val;
                }
            }
            if(root->left)
                subSum += DFS(root->left);
            if(root->right)
                subSum += DFS(root->right);
            return subSum;
        }
    }
};
