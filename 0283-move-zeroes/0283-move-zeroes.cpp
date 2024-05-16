class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZero=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                nums[lastNonZero]=nums[j];
                lastNonZero++;
            }
        }
        
        for(int j=lastNonZero;j<nums.size();j++){
            nums[j]=0;
        }
    }
     
};