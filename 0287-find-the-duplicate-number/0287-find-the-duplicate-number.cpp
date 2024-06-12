class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int unique=0;
       int duplicate=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=unique){
                unique++;
                nums[i]=unique;
            }
            else if(nums[i]==unique){
             duplicate=nums[i];
            }
        }
        return duplicate;
        
    }
};