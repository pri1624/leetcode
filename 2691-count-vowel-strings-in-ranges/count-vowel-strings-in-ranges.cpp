class Solution {
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
public:
    vector<int> vowelStrings(vector<string>& A, vector<vector<int>>& Q) {
        int N = A.size();
        vector<int> sum(N + 1), ans;
        for (int i = 0; i < N; ++i) sum[i + 1] = sum[i] + (isVowel(A[i][0]) && isVowel(A[i].back()));
        for (auto &q : Q) {
            ans.push_back(sum[q[1] + 1] - sum[q[0]]);
        }
        return ans;
    }
};