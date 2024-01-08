class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> tabs,tabt;
        if(s.length()<t.length()) return"";

        for(int i=0;i<t.length();i++){
            tabt[t[i]]++;
        }

        int count=0,start=0,left=-1,length=INT_MAX;
        for(int i=0;i<s.length();i++){
            tabs[s[i]]++;
            if(tabs[s[i]]<=tabt[s[i]]) count++;
            if(count==t.length()){
                while(tabs[s[start]]>tabt[s[start]]){
                    tabs[s[start]]--;
                    start++;
                }
                if(length>i-start+1){
                    length=i-start+1;
                    left=start;
                }
            }
        }
        if(left==-1) return"";
        else return s.substr(left,length);
    }
};
