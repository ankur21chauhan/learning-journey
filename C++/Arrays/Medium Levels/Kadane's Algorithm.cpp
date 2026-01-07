#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = nums[0];
        long long maxi = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            sum = max((long long)nums[i], sum + nums[i]);
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    Solution obj;
    cout << obj.maxSubArray(nums) << endl;

    return 0;
}
