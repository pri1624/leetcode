class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        long long score = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;

        for (int i = 0; i < n; ++i) {
            minHeap.emplace(nums[i], i);
        }

        vector<bool> marked(n, false);

        while (!minHeap.empty()) {
            auto [value, idx] = minHeap.top();
            minHeap.pop();

            if (marked[idx]) continue;

            score += value;

            marked[idx] = true;
            if (idx > 0) marked[idx - 1] = true;
            if (idx < n - 1) marked[idx + 1] = true;
        }

        return score;
    }
};