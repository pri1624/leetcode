class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set <int> interSection(nums1.begin(),nums1.end());
        set <int>ans;
        for(int i=0;i<nums2.size();i++){
            int num=nums2[i];
            if(interSection.find(num)!=interSection.end()){
                ans.insert(num);
            }
        }
        return vector <int>(ans.begin(),ans.end());
    }
};