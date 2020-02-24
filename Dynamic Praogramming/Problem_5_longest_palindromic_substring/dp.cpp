class Solution {
public:
    string longestPalindrome(string s) {
        //Dynamic programming
        //Odd substring
        string res="";
        if(s.size()==0)
            return s;
        int max_length =1;
        bool odd(false),even(false);
        int start_index(0),end_index(0);
        int length(1);
        for(int i=0; i <s.size(); ++i){
            int offset =0;
            bool pal=true;
            while( (i-offset>=0) && (i+offset<s.size())){
                if(s[i-offset] == s[i+offset] ) {
                    // string sub_str = s.substr(i-offset, 2*offset+1);
                    //Don't continuly call functions that relates to high demand for mmeory and disck usage
                    length = 2*offset+1;
                    // cout<<sub_str<<";";
                    if(length >max_length){
                        max_length = length;
                        odd = true;
                        start_index = i-offset;
                        end_index = i+offset;
                    }
                    ++offset;
                } //is palindrome
                else{ pal =false; break; }
            }
        }
        //Even substring
        for(int i=0; i<s.size()-1; ++i){
            int offset =0;
            bool pal = true;
            if(s[i] == s[i+1]){
                while( (i-offset>=0) && (i+1+offset<s.size()) ){
                    if(s[i-offset] == s[i+1+offset]){
                        // string sub_str = s.substr(i-offset,2*offset+2);
                        length = 2*offset +2;
                        // cout<<sub_str<<";";
                        if(length > max_length){
                            max_length = length;
                            start_index = i-offset;
                            end_index = i+1+offset;
                        }
                        ++offset;
                    }
                    else { break;}
                }
            }
        }
        return s.substr(start_index,end_index-start_index+1);
    }
};
