class Solution {
public:
    int maximumGain(string s, int x, int y) {
        char c1,c2;
        int ans=0;
        if(x>=y){
            c1='a';
            c2='b';
        }
        else{
            c1='b';
            c2='a';
        }
        string k;
        for(int i=0;i<s.size();i++){
            if(!k.empty()&&k.back()==c1&&s[i]==c2){
                ans+=max(x,y);
                k.pop_back();
            }
            else{
                k.push_back(s[i]);
            }
        }
        s=k;
        k.clear();
        for(int i=0;i<s.size();i++){
            if(!k.empty()&&k.back()==c2&&s[i]==c1){
                ans+=min(x,y);
                k.pop_back();
            }
            else{
                k.push_back(s[i]);
            }
        }
        return ans;
    }
};
