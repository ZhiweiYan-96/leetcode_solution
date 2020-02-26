class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) { return vector<int>({-1,-1});}
        int first_find = BinarySearch(nums,target,0,nums.size()-1);
        if(first_find==-1) { return vector<int>({-1,-1}); }
        if(nums.size()==1) { return vector<int>({0,0}); }
        int least_ind(first_find),max_ind(first_find);
        int left = 0, right= nums.size()-1;
        while(true){
            int smaller_ind = BinarySearch(nums,target,0,least_ind-1);
            // cout<<"Left:"<<0<<"Right:"<<least_ind-1<<"Mid:"<<smaller_ind;
            if(smaller_ind<least_ind && smaller_ind>=0){
                least_ind=smaller_ind;
                // right = least_ind-1;
            }
            int bigger_ind = BinarySearch(nums,target,max_ind+1,nums.size()-1);
            // cout<<"Left:"<<max_ind+1<<"Right:"<<nums.size()-1<<"Mid:"<<bigger_ind;
            if(bigger_ind>max_ind){
                max_ind = bigger_ind;
                // left = bigger_ind+1;
            }
            if(bigger_ind==-1 && smaller_ind==-1)
                break;
        }
        return vector<int>({least_ind,max_ind});
    }
    int BinarySearch(vector<int>&nums,int target,int left,int right){
        int mid = (left+right)/2;
        while(left<=right){
            // cout<<"Left:"<<left<<"Right:"<<right<<"Mid:"<<mid;
            if(nums[mid] > target){
                right = mid-1;
            }else if(nums[mid] < target){
                left = mid+1;
            }else if(nums[mid]== target){
                // cout<<"Left:"<<left<<"Right:"<<right<<"Mid:"<<mid;
                return mid;
            }
            mid = (left+right)/2;

        }
        // cout<<"Left:"<<left<<"Right:"<<right<<"Mid:"<<-1;
        return -1;

    }
};
