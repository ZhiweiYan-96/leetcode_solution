class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        if (prices.size()==0) return 0;
        int valley = prices[i];
        int peak = prices[i];
        int res =0;
        while(i<prices.size()-1){
            // cout<<i;
            while((i< prices.size()-1) && prices[i]>=prices[i+1])
                ++i;
            valley = prices[i];
            // cout<<"valley:"<<valley;
            while((i < prices.size()-1) && prices[i]<=prices[i+1])
                ++i;
            peak = prices[i];
            // cout<<"peak:"<<peak;
            res += (peak-valley);
        }
        return res;
    }
};
