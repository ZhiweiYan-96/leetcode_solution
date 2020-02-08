class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        //BFS
        queue<TreeNode*> temp;
        temp.push(root);
        int sum =0;
        while(!temp.empty()){
            // if even
            TreeNode * current = temp.front();
            if((current->val) %2 ==0){
                //left left grandchildren
                if( (current->left) && (current->left->left))
                    sum += (current->left->left)->val;
                // left right grand
                if( (current->left) && (current->left->right))
                    sum += current->left->right->val;
                //right right grand
                if( (current->right) && (current->right->right))
                    sum += (current->right->right)->val;
                //right left grand
                if( (current->right) && (current->right->left))
                    sum += (current->right->left)->val;
            }
            temp.pop();
            if(current->left)
                temp.push(current->left);
            if(current->right)
                temp.push(current->right);
        }
        return sum;
    }
};
