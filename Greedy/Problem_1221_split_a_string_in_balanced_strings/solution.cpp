class Solution {
public:
    int balancedStringSplit(string s) {
        int length = s.size();
        char init_ch = s[0];
        char rev_ch  = (s[0] == 'R' ? 'L': 'R');
        int res=0;
        int count = 0;
        for(int i=1; i<length; ++i){
            if(count ==1){
                res++;
                init_ch = s[i];
                rev_ch  = ((s[i] == 'R') ? 'L': 'R');
                count = 0;
                continue;
            }
            if(s[i]==rev_ch)
                count++;
            else
                count--;
        }
        return (count ==1)? res+1:res;
    }
};
