#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Step 1: Count frequency of each element
        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Find element with highest frequency
        int maxFreq = 0;
        int ans = INT_MAX;

        for (auto& it : freq) {
            int element = it.first;
            int count = it.second;

            if (count > maxFreq || (count == maxFreq && element < ans)) {
                maxFreq = count;
                ans = element;
            }
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 3, 3, 3};
    Solution sol;
    cout << sol.mostFrequentElement(nums) << endl; // Output: 3

    nums = {4, 4, 5, 5, 6};
    cout << sol.mostFrequentElement(nums) << endl; // Output: 4

    return 0;
}
