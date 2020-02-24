class Solution {
public:
    int maxArea(vector<int>& height) {
        int res=0;
        for(int i=0; i< height.size(); ++i){
            int cur_height = height[i];
            for(int j=1; j<height.size(); ++j){
                int h = min(cur_height,height[j]);
                int w = j-i;
                int area =h*w;
                if(area>res) {res = area; }
            }
        }
        return res;
    }
};
