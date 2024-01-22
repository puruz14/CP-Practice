class Solution{
  public:
    int longestKSubstr(string s, int k) {
        unordered_map<char,int> m;
        int uniq=0,i=0,j=0,ans=0,n=s.length();
        while(j<n){
            while(j<n){
                if(m[s[j]]==0) uniq++;
                m[s[j]]++;
                if(uniq>k) break;
                j++;
            }
            if(uniq>=k) ans=max(ans,j-i);
            if(j==n) break;
            
            while(i<n){
                if(m[s[i]]==1) uniq--;
                m[s[i]]--;
                if(uniq==k) break;
                i++;
            }
            i++;
            j++;
        }
        if(!ans) return -1;
        return ans;
    }
};
