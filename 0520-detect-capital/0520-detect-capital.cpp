class Solution {
public:
    bool detectCapitalUse(string word) {
        int up=0, low=0;
        for(int c = 0; c < word.size(); c++){
            if(isupper(word[c]))
                up++;
            else
                low++;
        }
        if(up==word.size()||low==word.size())
            return true;
        else if(low==word.size()-1&&isupper(word[0]))
            return true;
        return false;
    }
};