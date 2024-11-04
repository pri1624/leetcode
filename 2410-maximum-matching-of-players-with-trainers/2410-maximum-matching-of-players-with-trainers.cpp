class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int cnt=0,l=0,r=0;
        while(l<players.size()&&r<trainers.size()){
            if(trainers[r]>=players[l]){
                cnt++;
                l++;
                r++;
            }
            else{
                r++;
            }
        }
        return cnt;
    }
};