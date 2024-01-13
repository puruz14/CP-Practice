class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt<0){
                ans++;
                cnt=0;
            }
        }
        cnt=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==')'){
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt<0){
                ans++;
                cnt=0;
            }
        }
        return ans;
    }
};
