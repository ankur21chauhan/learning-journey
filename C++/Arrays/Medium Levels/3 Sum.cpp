#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        vector<vector<int>> threeSum(vector<int>& nums){
            vector<vector<int>> ans;
            int n = nums.size();
            sort(nums.begin(),nums.end());
            for(int i = 0; i <= n-1; i++){
                if(i > 0 && nums[i] == nums[i - 1]){
                    continue;
                }
                int j = i + 1;
                int k = n - 1;
                while(k > j){
                    int sum = nums[i] + nums[j] + nums[k];
                    if(sum < 0){
                        j++;
                    }
                    else if(sum > 0){
                        k--;
                    }
                    else{
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        ans.push_back(temp);
                        j++;
                        k--;
                        while(j < k && nums[j] == nums[j - 1]){
                            j++;
                        }
                        while(j < k && nums[k] == nums[k+1]){
                            k--;
                        }

                    }
                }
            }

            return ans;
        }
};

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    solution obj;
    vector<vector<int>> result = obj.threeSum(nums);

    // Print result
    for (auto &triplet : result) {
        for (int x : triplet) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}