class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int cnt=1, maxcnt=1;
        sort(nums.begin(), nums.end());
        for(int i=1;i<nums.size();i++){
            
            if(nums[i]==nums[i-1]){
                continue;
            }
            else if(nums[i]==nums[i-1]+1){
                cnt++;
            }
            else{
                maxcnt=max(cnt,maxcnt);
                cnt=1;
            }
        }
        maxcnt = max(maxcnt, cnt);
        return maxcnt;
    }
};