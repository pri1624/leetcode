class Solution {
    int binary_search(vector<int>& nums, int low, int high, int target) {
        if(low>high){
            return -1;
        }
        int mid=low+(high-low)/2;
        if(nums[mid]==target) {
            return mid;
        }
        else if(nums[mid]>target){
            return binary_search(nums,low, mid-1,target);
        }
        else{
            return binary_search(nums,mid+1,high,target);
        }
        
    }
    public:
    int search(vector<int>& nums, int target){
        if(!nums.size())
            return -1;
        return binary_search(nums,0,nums.size()-1,target);
    }
};