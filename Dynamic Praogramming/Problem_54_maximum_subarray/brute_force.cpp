class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sub = nums[0];
        if(nums.size()==1)
            return max_sub;
        for(int i=1; i<nums.size(); ++i){
            int asum =0;
            for(int k=i; k>=0; k--){
                asum += nums[k];
                if(asum>max_sub){
                    max_sub = asum;
                }
            }
        }
        return max_sub;
    }

    int subsum(vector<int>& nums,int i,int j){
        int sum=0;
        while(i<=j){
            sum+= nums[i];
            i++;
        }
        return i;
    }

};
