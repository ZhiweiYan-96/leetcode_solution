class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res;
        for(int i=0; i<=num;++i){
            int n= count(i);
            cout<<n;
            res.push_back(n);
        }
        return res;
    }
    int count(int num){
        if(num==0)
            return 0;
        if(num==1)
            return 1;
        int res=0;
        while(num/2!=1){
            res += (num%2);
            num/=2;
        }
        res += (num%2);
        res += 1;
        return res;
    }
};
