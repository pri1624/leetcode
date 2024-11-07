class Solution {
public:
    int mySqrt(int x) {
        int l=0,h=x;
        while(l<=h){
            int m=l+(h-l)/2;
            long long m_sqr = (long long)m * m;
            if(m_sqr==x){
                return m;
            }
            else if(m_sqr>x){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return h;
    }
};