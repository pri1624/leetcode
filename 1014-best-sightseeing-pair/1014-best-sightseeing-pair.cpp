class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n=values.size();
        int maxi=INT_MIN;
        int left=values[0];

        for(int i=1;i<n;i++){
            maxi=max(maxi, left+values[i]-i);
            left=max(left,values[i]+i);
        }
        return maxi;
    }
};
