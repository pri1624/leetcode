class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end()), sort(g.begin(),g.end());
        int n=g.size(), m=s.size();
        int cnt=0, l=0, r=0;
        while(l<n&&r<m){
            if(s[r]>=g[l]){
                cnt++;
                r++;
                l++;
            }
            else r++;
        }     
        return cnt;
     }
};