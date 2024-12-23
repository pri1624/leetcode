/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumOperations(TreeNode* root) {
        if (!root) return 0;

        queue<TreeNode*> nodeQueue;
        nodeQueue.push(root);
        int totalOperations = 0;

        auto calculateOperations = [](vector<int>& values) {
            int size = values.size();
            vector<int> sortedValues(values.begin(), values.end());
            sort(sortedValues.begin(), sortedValues.end());
            unordered_map<int, int> valueToIndexMap;
            for (int i = 0; i < size; ++i) {
                valueToIndexMap[sortedValues[i]] = i;
            }
            for (int i = 0; i < size; ++i) {
                values[i] = valueToIndexMap[values[i]];
            }
            vector<bool> visited(size, false);
            int operationsCount = 0;
            for (int i = 0; i < size; ++i) {
                if (visited[i] || values[i] == i) {
                    continue;
                }
                int cycleLength = 0;
                int j = i;
                while (!visited[j]) {
                    visited[j] = true;
                    j = values[j];
                    ++cycleLength;
                }
                if (cycleLength > 1) {
                    operationsCount += (cycleLength - 1);
                }
            }
            return operationsCount;
        };

        while (!nodeQueue.empty()) {
            vector<int> currentLevelValues;
            for (int n = nodeQueue.size(); n > 0; --n) {
                TreeNode* currentNode = nodeQueue.front();
                nodeQueue.pop();
                currentLevelValues.push_back(currentNode->val);
                if (currentNode->left) {
                    nodeQueue.push(currentNode->left);
                }
                if (currentNode->right) {
                    nodeQueue.push(currentNode->right);
                }
            }
            totalOperations += calculateOperations(currentLevelValues);
        }

        return totalOperations;
    }
};
