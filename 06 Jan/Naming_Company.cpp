class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        int n=ideas.size();
        unordered_map<string,int> m;
        for(int i=0;i<n;i++){
            m[ideas[i]]++;
        }

        vector<vector<int>> start(26,vector<int>(26));
        for(int i=0;i<n;i++){
            string str=ideas[i];
            int pre=str[0]-'a';

            for(char c='a';c<='z';c++){
                str[0]=c;
                if(m.find(str)==m.end()){
                    int x=str[0]-'a';
                    start[pre][x]++;
                }
            }
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            string str=ideas[i];
            int pre=str[0]-'a';

            for(char c='a';c<='z';c++){
                str[0]=c;
                if(m.find(str)==m.end()){
                    int x=str[0]-'a';
                    ans+=start[x][pre];
                }
            }
        }
        return ans;
    }
};
