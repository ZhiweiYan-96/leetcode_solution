class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
        //Initialize first k element
        kth = k;
        if (nums.size()!=0){
            for(int i=0; i<nums.size(); ++i)
                add(nums[i]);
        }
    }

    int add(int val) {
        // if(firstKelement.size()>0) cout<<firstKelement.top();
        if(firstKelement.size()<kth){
            firstKelement.push(val);
            return firstKelement.top();
        }
        else{
            if(val>firstKelement.top()){
                firstKelement.pop();
                firstKelement.push(val);
                return firstKelement.top();
            }
            else return firstKelement.top();
        }

    }
private:
    priority_queue<int,vector<int>,greater<int>> firstKelement;
    int kth;

};
