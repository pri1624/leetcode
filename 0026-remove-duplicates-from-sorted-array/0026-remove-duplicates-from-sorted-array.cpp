#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int removeDuplicates(vector<int>&nums){
        int n=nums.size();
        if(n<=1){
            return n;
        }
        else{
            int i=0;
            for(int j=0;j<n;j++){
                if (nums[i]!=nums[j]){
                    i++;
                    nums[i]=nums[j];
                }
            }
            return i+1;
        }
    }
};