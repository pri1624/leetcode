// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=0, high=n, result=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isBadVersion(mid)){
                result=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return result;
    }
};