class Solution {
public:
    bool rotateString(string s, string goal) {
     if(goal.size()!=s.size()) return false;
        string concatenated=s+s;
        return concatenated.find(goal)!= string::npos;
    }
};