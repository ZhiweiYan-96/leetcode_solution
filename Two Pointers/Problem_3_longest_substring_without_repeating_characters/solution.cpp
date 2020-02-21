class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=1;
        int slow=0;
        int fast=0;
        string sub;
        if(s=="") return 0;
        while(fast<s.size()-1){
            sub = s.substr(slow,fast-slow+1);
            // cout<<"sub:"<<sub<<" ";
            //judge duplication
            int len = sub.size();
            fast++;
            bool dup=false;
            for( int index=slow; index<fast;++index){
                if(s[index] == s[fast]){
                    res = max(len,res);
                    slow = index+1;
                    dup=true;
                    break;
                }
            }
            if(!dup && len+1>res){
                // cout<<"slow:"<<slow<<"fast:"<<fast;
                // cout<<sub<<" ";
                res = sub.size()+1;
            }

        }
        return res;
    }
};
