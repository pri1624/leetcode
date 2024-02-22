class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>trustcount(n+1,0);
        for (int i = 0; i < trust.size(); i++) {
            int a = trust[i][0];
            int b = trust[i][1];
            trustcount[a]--;
            trustcount[b]++;
            }
        for(int i=1;i<=n;i++){
            if(trustcount[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};