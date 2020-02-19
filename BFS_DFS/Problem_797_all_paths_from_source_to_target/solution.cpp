class Solution {
private:
    vector<vector<int>> res;
    vector<int> temp;
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        temp.push_back(0);
        solve(graph,0);

        return res;
    }
    void solve(vector<vector<int>> & graph,int pos){
        if(pos==(graph.size()-1)){  res.push_back(temp); return ;}
        //recursion on every ajdacent elements
        for(auto iter= graph[pos].begin(); iter!= graph[pos].end(); ++iter){
            //get adjacent element
            temp.push_back(*iter);
            solve(graph,*iter);
            temp.pop_back();
            // temp.pop_back();
        }
    }
};
