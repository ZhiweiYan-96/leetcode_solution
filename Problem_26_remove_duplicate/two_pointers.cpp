class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j;  // i refers to slow pointer, j refers to quick pointer
        i=j=0;
        while(j<nums.size())
        {
            if(nums[j]==nums[i])
                ++j;
            else{
                nums[++i] = nums[j++];  //Mind that ++i and i++ returns different value
            }
        }
        return ++i;
    }
};
