class Solution {
public:
    string intToRoman(int num) {
        string res;
        int n_1000 = num/1000;
        for(int i=0; i<n_1000; ++i) { res+= "M"; }
        int n_100 = (num - num/1000*1000)/100;
        if(n_100 ==4 ){
            res+="CD";}
        else if(n_100 ==9){
            res+="CM";}
        else{
            int n_500 = n_100 /5;
            for(int i=0; i<n_500;++i){
                res+="D";
            }
            int n_100_1 = n_100-5*n_500;
            for(int i=0; i<n_100_1;++i){
                res+="C";
            }
        }

        int n_10 = (num - num/1000*1000 - n_100*100)/10;
        if(n_10 ==4 ){
            res+="XL";}
        else if(n_10 ==9){
            res+="XC";}
        else{
            int n_50 = n_10 /5;
            for(int i=0; i<n_50;++i){
                res+="L";
            }
            int n_10_1 = n_10-5*n_50;
            for(int i=0; i<n_10_1;++i){
                res+="X";
            }
        }

        int n_1 = num - num/1000*1000 - n_100*100 - n_10*10;
        cout<<n_1<<" ";
        if(n_1 ==4 ){
            res+="IV";}
        else if(n_1 ==9){
            res+="IX";}
        else{
            int n_5 = n_1 /5;
            for(int i=0; i<n_5;++i){
                res+="V";
            }
            int n_1_1 = n_1-5*n_5;
            for(int i=0; i<n_1_1;++i){
                res+="I";
            }
        }

        return res;

    }
};
