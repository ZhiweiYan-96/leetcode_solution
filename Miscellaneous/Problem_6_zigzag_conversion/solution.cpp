class Solution {
public:
    string convert(string s, int numRows) {
        //make numRos string for stored output lines
        vector<string> str_list;
        if(s.size()==1)
            return s;
        for(int i=0; i< numRows; ++i){
            str_list.push_back( string("") );
        }
        bool down(true),up(false);
        int index=0;
        while(index<s.size()){
            if(down){
                for(int i=0; i<numRows && index<s.size(); ++i){
                    str_list[i].push_back(s[index]);
                    index++;
                }
                up=true; down=false;
            }
            if(up){
                for(int i=0; i<numRows-2 && index<s.size(); ++i){
                    str_list[numRows-i-2].push_back(s[index]);
                    ++index;
                }
                up=false; down=true;
            }
        }
        string res("");
        for(int i=0; i<numRows; ++i)
            res += str_list[i];
        return res;
    }

};
