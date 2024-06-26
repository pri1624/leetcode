class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int n=nums.size();  
    int me=INT_MIN;
    int me2=INT_MIN;
    int cnt1=0,cnt2=0;
        vector<int>ans;
         for (int i = 0; i < n; i++) {
            if (nums[i] == me) {
                cnt1++;
            } else if (nums[i] == me2) {
                cnt2++;
            } else if (cnt1 == 0) {
                me = nums[i];
                cnt1 = 1;
            } else if (cnt2 == 0) {
                me2 = nums[i];
                cnt2 = 1;
            } else {
                cnt1--;
                cnt2--;
            }
        }
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==me){
                c1++;
            }
            else if(nums[i]==me2){
                c2++;
            }
        }
        if(c1>n/3){
            ans.push_back(me);
        }
        if(c2>n/3){
            ans.push_back(me2);
        }
        return ans;
};
};