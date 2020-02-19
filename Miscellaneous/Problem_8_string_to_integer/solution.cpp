class Solution {
public:
    int myAtoi(string str) {
        bool less_zero = false;
        //discard white spaces.
        long res=0;
        string::iterator beg = str.begin();
        while( (*beg) == ' '){ ++beg; }
        // compare to zero
        if( (*beg)=='-' || (*beg) =='+' ){
            if( (*(beg+1))>='0' && (*(beg+1)) <= '9' ){
                less_zero = ((*beg)=='-') ? true:false;
                ++beg;
            }else{
                return 0;
            }
        }
        if( ! ( (*beg)>='0' && (*beg) <='9'  )){
            return 0;
        }else{
            // res = (*beg) - '0';
            // cout<<res<<" ";
            while( beg != str.end() ){
                if( ((*beg)>='0' && (*beg) <='9') ){
                    res = res*10 + ( (*beg) - '0');
                    if(res>INT_MAX && (!less_zero)) return INT_MAX;
                    if( less_zero && (-res<INT_MIN)) return INT_MIN;
                    cout<<res<<" ";
                }else{
                    if(res>INT_MAX && (!less_zero)) return INT_MAX;
                    if( less_zero && (-res<INT_MIN)) return INT_MIN;
                    return less_zero? -res:res;
                }
                ++beg;
            }
        }
        if(res>INT_MAX && (!less_zero)) return INT_MAX;
        if( less_zero && (-res<INT_MIN)) return INT_MIN;
        return less_zero? -res:res;
    }
};
