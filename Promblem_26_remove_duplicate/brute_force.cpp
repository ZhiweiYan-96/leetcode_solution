class Solution {
public:
    void move(vector<int>& nums,int i)
    {
        for(int j=i-1;j<nums.size()-1;++j)
        {
            nums[j] = nums[j+1];
            // cout<<nums[j];
        }
        nums.pop_back();
    }
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        while(i<nums.size())
        {
            if(nums[i]==nums[i-1])
                move(nums,i);
            if(nums[i]!=nums[i-1])
                ++i;
            // for(int j=0; i<nums.size();++j)
            //     cout<<nums[j];
        }
        return nums.size();
    }
};
