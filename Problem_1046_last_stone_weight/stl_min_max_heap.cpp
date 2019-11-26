class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> que;
        for(auto stone :stones)
            que.push(stone);
        while(que.size()>1){
            int max_v = que.top();
            que.pop();
            int inf_v = que.top();
            que.pop();
            if(max_v!=inf_v)
                que.push(abs(max_v-inf_v));
        }
        return (que.size()==0? 0 : que.top());
    }
};
