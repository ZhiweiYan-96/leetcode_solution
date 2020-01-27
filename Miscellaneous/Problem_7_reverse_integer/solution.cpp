class Solution {
public:
    int reverse(int x) {
        int div = x/10;
        int results = x%10;
        bool minus=false;
        if(x<0)
        {
            minus = true;
            x = -x ;
        }
        if(div==0)
        {
            return minus? -x : x;
        }
        while(div/10!=0)
        {
            results = results*10 + div%10;
            div = div/10;
        }

        long results_1 =(long)results*10 +div%10;
        if(results_1>INT_MAX || results_1<INT_MIN)
            return 0;
        if (minus){
            x=-x;
        }
        return results_1;
    }
};
