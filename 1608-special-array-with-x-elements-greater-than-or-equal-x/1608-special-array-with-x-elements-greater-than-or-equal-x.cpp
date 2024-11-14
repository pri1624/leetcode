class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int low=0, high=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            int x=0;
            for(int num:nums){
                if(num>=mid){
                    x++;
                }
            }
            if(x==mid){
                return mid;
            }
            else if(x>mid){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};