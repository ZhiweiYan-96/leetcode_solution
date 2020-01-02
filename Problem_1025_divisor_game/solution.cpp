class Solution {
public:
    bool divisorGame(int N) {
        bool wins[N];
        for(int i=0;i<N;++i)
            wins[i] = false;
        if(N==1) return false;
        if(N==2) return true;
        if(N==3) return false;
        wins[0] = false; wins[1] = true; wins[2] = false;
        wins[N-1] = false;
        for(int i=3; i<N; ++i)
        {
            // for(int k=0;k<N;k++)
            //     cout<<wins[k];
            // cout<<"end";
            for(int j=0; j<i;j++)
            {
                if( (i+1)%(j+1)==0 ){
                    wins[i] = (wins[i])||(!wins[i-j-1]);
                }
                if(wins[i]==true) break;
            }
        }
        return wins[N-1];
    }

};
