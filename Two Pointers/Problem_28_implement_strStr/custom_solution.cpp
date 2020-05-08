class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size())
            return -1;
        if(needle.size()==0)
            return 0;
        for(int i=0; i<haystack.size();++i){
            bool has_find=false;

            if(haystack[i] == needle[0] && ( i+needle.size()-1<haystack.size() )&& (haystack[i+needle.size()-1] == needle[needle.size()-1])){
                //match
                int k=i;
                int j=0;
                while(k<haystack.size() && j<needle.size() && haystack[k]==needle[j]){
                    k++;
                    j++;
                }
                if(j==needle.size())
                    return i;
            }
        }
        return -1;

    }
};
