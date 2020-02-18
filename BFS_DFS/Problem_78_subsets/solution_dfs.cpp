class Solution {
private:
    vector<vector<int>> res;
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int deep = 0;
        vector<int> temp;
        count(0,nums,temp);
        return res;
    }
    void count(int deep,vector<int> nums,vector<int> temp){
        if(deep==nums.size()){
            //print temp
            // for(auto ele=temp.begin(); ele!=temp.end(); ++ele){
            //     cout<<(*ele)<<" ";
            // }
            res.push_back(temp);
            return ;
        }
        temp.push_back( nums[deep] );
        count(deep+1,nums,temp);
        temp.pop_back();
        count(deep+1,nums,temp);
    }
};
