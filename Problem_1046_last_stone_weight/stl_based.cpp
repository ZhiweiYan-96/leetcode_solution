#include<algorithm>
#include<iterator>
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        vector<int> stored;
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            int length = stones.size();
            // pop top two elements
            int biggest,inferior;
            biggest = stones.back();
            stones.pop_back();
            inferior = stones.back();
            stones.pop_back();
            int to_insert =  (inferior==biggest ? 0 : biggest-inferior);
            if (to_insert)
                stones.push_back(to_insert);
        }
        return stones.size()==0 ? 0 : stones[0];
    }
};
