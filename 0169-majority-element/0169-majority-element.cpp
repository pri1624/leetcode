class Solution {
public:
    int majorityElement(vector<int> v) {
        int n=v.size();
        int cnt=1;
        int ele=v[0];
        for(int i=0;i<n;i++){
            if(v[i]==ele){
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt==0){
                ele=v[i];
                cnt=1;
            }
        }
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(v[i]==ele){
                cnt2++;
            }
        }
        if(cnt2>(n/2)){
            return ele;
        }
return -1;
}};