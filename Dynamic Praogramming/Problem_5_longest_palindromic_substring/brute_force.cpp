class Solution {
public:
    string longestPalindrome(string s) {
        //Brute force
        string res="";
        for(int start=0; start<s.size();++start){
            for(int end=start; end<s.size(); ++end){
                string sub_str = s.substr(start,end-start+1);
                if( checkPal(sub_str) ){
                    if(sub_str.size()>res.size())
                        res = sub_str;
                }
            }
        }
        return res;
    }
    bool checkPal(string s){
        int start=0;
        int last = s.size()-1;
        while(s[start] == s[last] & start<last){
            start++;
            last--;
        }
        if(s[start] != s[last])
            return false;
        else
            return true;
    }
};
