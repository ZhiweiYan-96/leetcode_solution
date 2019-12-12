class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> res;
        stack<int> valid;
        for(int i=0 ; i<ops.size();++i){
            string element_str = ops[i];
            char element = ops[i][0];
            switch(element){
                case 'C':{
                    //pop up last valid and results
                    valid.pop();
                    res.pop();
                    res.push( get_results(valid) );
                    break;
                }
                case 'D':{
                    res.push(2*valid.top());
                    valid.push(2*valid.top());
                    break;
                }
                case '+':{
                    int back = valid.top();
                    valid.pop();
                    int back_m1 = valid.top();
                    cout<<back<<" "<<back_m1;
                    valid.pop();
                    res.push(back_m1+back);
                    valid.push(back_m1);
                    valid.push(back);
                    valid.push(back_m1+back);
                    break;
                }
                default :{
                    int digit = stoi(element_str );
                    res.push(digit);
                    valid.push(digit);
                }
            }
            if (res.size()==2){
                int val1= res.top();
                res.pop();
                int val2= res.top();
                res.pop();
                // cout<<val1+val2<<" ";
                res.push(val1+val2);
            }
        }
        return res.top();
    }

    public: int get_results(stack<int> valid_stack){
        int res=0 ;
        while(valid_stack.size()>0){
            res += valid_stack.top();
            valid_stack.pop();
        }
        return res;
    }
};
//This solution is a bit of slow, improved version will be commited as soon as possible.
