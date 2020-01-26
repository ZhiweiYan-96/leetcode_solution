class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int n_odd = 0 ;
        int n_eve = 0;
        for(int i=0 ; i < chips.size(); ++i){
            if(chips[i]%2==0)
                ++n_eve;
            else
                ++n_odd;
        }
        return (n_eve<n_odd)? n_eve:n_odd;
    }
};
