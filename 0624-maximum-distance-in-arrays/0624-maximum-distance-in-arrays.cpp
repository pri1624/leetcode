class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int minsofar=arrays[0][0], maxsofar=arrays[0].back(), maxdistance=0;
        for(int i=1;i<arrays.size();i++){
                maxdistance=max(maxdistance,max(arrays[i].back()-minsofar,maxsofar-arrays[i][0]));
                minsofar=min(minsofar,arrays[i][0]);
                maxsofar=max(maxsofar,arrays[i].back());
            }
        return maxdistance;
    }
};