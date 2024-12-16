class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char>exist;
        for(int i=0;i<sentence.size();i++){
            char current=tolower(sentence[i]);
            if(isalpha(current)){
                exist.insert(current);
            }
        }
        return exist.size()==26;
    }
};