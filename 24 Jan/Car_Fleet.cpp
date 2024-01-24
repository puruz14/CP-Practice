class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<int,double> mp;
        int ans=0;
        double cur=0;
        for(int i=0;i<position.size();i++){
            mp[-position[i]]=(double)(target-position[i])/speed[i];
        }
        for(auto it:mp){
            if(it.second>cur){
                cur=it.second;
                ans++;
            }    
        } 
        return ans;
    }
};
