class Solution {
private:
    vector<string> res;
    string temp;
    map<char,string> dig2str;
public:
    vector<string> letterCombinations(string digits) {
        // dig2str.insert( pair<char,vector<char>('2', vector<char>(['a','b','c']) ));
        // dig2str.insert( pair<char,vector<char>('3', vector<char>({'d','e','f'})));
        // dig2str.insert( pair<char,vector<char>('4', vector<char>({'g','h','i'})));
        // dig2str.insert( pair<char,vector<char>('5', vector<char>({'j','k','l'})));
        // dig2str.insert( pair<char,vector<char>('6', vector<char>({'m','n','o'})));
        // dig2str.insert( pair<char,vector<char>('7', vector<char>({'p','q','r','s'})));
        // dig2str.insert( pair<char,vector<char>('8', vector<char>({'t','u','v'})));
        // dig2str.insert( pair<char,vector<char>('9', vector<char>({'w','x','y','z'})));
        dig2str.insert( pair<char,string>('2',string("abc") ));
        dig2str.insert( pair<char,string>('3',"def"));
        dig2str.insert( pair<char,string>('4',"ghi"));
        dig2str.insert( pair<char,string>('5',"jkl"));
        dig2str.insert( pair<char,string>('6',"mno"));
        dig2str.insert( pair<char,string>('7',"pqrs"));
        dig2str.insert( pair<char,string>('8',"tuv"));
        dig2str.insert( pair<char,string>('9',"wxyz"));
        if(digits =="")
            return res;
        DFS(digits,0);
        return res;
    }
    void DFS(string digits,int deep){
        if(deep == digits.size()){
            res.push_back( temp);
            return ;
        }

        string ch_set = dig2str[digits[deep]];
        for(auto ch:ch_set){
            // cout<<ch;
            temp += ch;
            DFS(digits,deep+1);
            temp.pop_back();
        }
    }
};
