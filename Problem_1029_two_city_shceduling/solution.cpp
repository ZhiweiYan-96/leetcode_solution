bool solution_less(vector<int>& a, vector<int> &b ){
    return (a[2]< b[2]);
}
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        //Add element for diff computation
        for(int i=0 ; i<costs.size() ; ++i){
            costs[i].push_back( costs[i][0] - costs[i][1] );
        }
        sort( costs.begin(),costs.end(), solution_less );
        int results =0;
        for(int i =0 ; i <costs.size()/2; i ++)
            results += costs[i][0];
        for(int i= costs.size()/2; i< costs.size(); ++i)
            results += costs[i][1];
        return results;
    }
};
