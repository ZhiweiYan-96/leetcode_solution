class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> res;
        vector<int> g_nums;
        for(int i=0; i <groupSizes.size(); ++i){
            // Get current numbers of
            int cur_size = groupSizes[i];
            bool exist = false;
            for(int j=0; j<res.size(); ++j){
                if((cur_size == g_nums[j]) && (res[j].size() < cur_size )){
                    res[j].push_back(i);
                    exist=true;
                }
            }
            if(!exist){
                vector<int> temp;
                temp.push_back(i);
                res.push_back(temp);
                g_nums.push_back(cur_size);
            }
        }
        return res;
    }
};
