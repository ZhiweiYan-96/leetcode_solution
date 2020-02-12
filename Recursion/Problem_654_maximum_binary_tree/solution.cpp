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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* root = new TreeNode(0);
        return construct(nums,0,nums.size()-1,root);
    }
    TreeNode* construct(vector<int>&nums, int left,int right,TreeNode *root)    {
        //Find the max value of nums
        if(left>right)
            return NULL;
        int max_v = nums[left];
        int max_index = left;
        for(int i=left; i <=right; ++i){
            if(nums[i]>max_v){
                max_v = nums[i];
                max_index = i;
            }
        }
        root = new TreeNode(max_v);
        root->left = construct(nums,left,max_index-1,root->left);
        root->right = construct(nums,max_index+1,right,root->right);
        return root;
    }
    void print_tree(TreeNode * root){
        cout<<(root->val);
        if(root->left)
            print_tree(root->left);
        if(root->right)
            print_tree(root->right);
    }

};
