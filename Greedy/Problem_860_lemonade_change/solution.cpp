class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n_5=0;
        int n_10=0;
        // int n_20=0;
        for(int i=0; i<bills.size(); ++i){
            if(bills[i]==5)
                n_5++;
            else if(bills[i]==10){
                if(n_5==0)
                    return false;
                else{
                    n_5--;
                    n_10++;
                }
            }
            else if(bills[i]==20){
                if(n_5>=3 || (n_10>0 && n_5>0)){
                    if(n_10>0 && n_5>0){
                        n_10--;
                        n_5--;
                        // n_20++;
                    }
                    else if(n_5>=3){
                        n_5 -=3;
                        // n_20 ++;
                    }
                }else
                    return false;
            }
            // cout<<n_5<<","<<n_10<<","<<n_20<<"/";
        }
        return true;
    }
};
