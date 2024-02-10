class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>count(256, 0);
        int i=0,j=0,len=0;
        int n=s.length();
        while(j<n){
            count[s[j]]++;
            while(count[s[j]]>1){
                count[s[i]]--;
                i++;
            }
            len=max(len,j-i+1);
            j++;
        }
        return len;
        
    }
};