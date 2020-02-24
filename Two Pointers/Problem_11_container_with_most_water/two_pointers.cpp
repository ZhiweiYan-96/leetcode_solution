class Solution {
public:
    int maxArea(vector<int>& height) {
        int left(0),right(height.size()-1);
        int init_area = (right-left)*min(height[left],height[right]);
        while(left<right){
            bool forward_right = (height[left]<height[right])? true:false;
            int small_one = min(height[left], height[right]);
            if(forward_right){
                ++left;
                while(height[left]<small_one) { ++left;}
            }
            else{
                right--;
                while(height[right]<small_one) {--right;}
            }
            // if((forward_right && height[left]< height[left-1]) || ( (!forward_right) && height[right] < height[right+1]) )
            //     continue;
            int area = (right-left)*min(height[left],height[right]);
            if(area>init_area)
                init_area = area;

        }
        return init_area;
    }
};
