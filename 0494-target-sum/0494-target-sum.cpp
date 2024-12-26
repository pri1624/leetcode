class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int total=accumulate(nums.begin(),nums.end(),0);
        
        if((target+total)%2!=0||(target+total)<0){
            return 0;
        }
        
        int subsetsum=(target+total)/2;
        
        vector<int> dp(subsetsum+1,0);
        dp[0]=1;
        
        for (int num : nums) {
            for (int j = subsetsum; j >= num; --j) {
                dp[j] += dp[j - num];
            }
        }
        return dp[subsetsum];
    }
};