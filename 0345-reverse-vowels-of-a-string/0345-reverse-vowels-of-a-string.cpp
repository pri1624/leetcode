class Solution {
public:
        bool isvowel(char i) {
        return (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ||
                i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U');
        }
        string reverseVowels(string s) {
        int l=0, r=s.size()-1;
        while(l<r){
            while(l<r && !isvowel(s[l])){
                l++;
            }
            while(l<r && !isvowel(s[r])){
                r--;
            }
            if(l<r){
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};