class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        vector<int>ans(2,-1);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(target==nums[mid]){
                ans[0]=mid;
                high=mid-1;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
            
        }
        low = 0, high = nums.size() - 1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(target==nums[mid]){
                ans[1]=mid;
                low=mid+1;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else if (target<nums[mid]){
                high=mid-1;
            }
        }
        return ans;
    }
};