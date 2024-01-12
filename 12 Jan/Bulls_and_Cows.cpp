class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> a(10,0),b(10,0);
        int bull=0,cow=0;
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]){
                bull++;
            }
            else{
                a[secret[i]-'0']++;
                b[guess[i]-'0']++;
            }
        }
        for(int i=0;i<10;i++){
            cow+=min(a[i],b[i]);
        }
        return to_string(bull)+"A"+to_string(cow)+"B";
    }
};
