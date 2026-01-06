#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++){
                int complement = target - nums[i];

                if(hash.find(complement) != hash.end()){
                    return {hash[complement], i};
                }

                hash[nums[i]] = i;
            }
        return {}; 
    }
};

int main() {
    int n, target;
    cin >> n;  // array size
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];  // array elements
    }

    cin >> target;  // target value

    Solution sol;
    vector<int> ans = sol.twoSum(nums, target);

    if (!ans.empty()) {
        cout << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No valid pair found" << endl;
    }

    return 0;
}