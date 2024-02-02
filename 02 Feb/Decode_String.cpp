class Solution {
public:
    string decodeString(string s) {
        int pos=0;
        return decode(pos,s);
    }
    string decode(int& pos,string s){
        int num=0;
        string pass="";
        for(pos;pos<s.size();pos++){
            char cur=s[pos];
            if(cur=='['){
                string curstr=decode(++pos,s);
                for(num;num>0;num--){
                    pass+=curstr;
                }
            }
            else if(cur>='0'&&cur<='9'){
                num=num*10+cur-'0';
            }
            else if(cur==']'){
                return pass;
            }
            else{
                pass+=cur;
            }
        }
        return pass;
    }
};
