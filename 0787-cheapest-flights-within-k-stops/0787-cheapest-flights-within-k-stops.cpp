class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int>dist(n,INT_MAX);
        dist[src]=0;
        
        for(int i=0;i<=k;i++){
            vector<int> temp(dist);
            for (int i = 0; i < flights.size(); ++i) {
                int u = flights[i][0];
                int v = flights[i][1];
                int w = flights[i][2];
                if(dist[u]!=INT_MAX &&dist[u]+w<temp[v]){
                    temp[v]=dist[u]+w;
                }
    
        }
            dist=temp;
    }
        if (dist[dst] != INT_MAX) {
            return dist[dst];
        } else 
        {
            return -1;
        }}
};