//Problem 27 Apply Operations to an array
//Input: nums = [1,2,2,1,1,0] ---> Output: [1,4,2,0,0,0]

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n-1; i++){
            if(nums[i] == nums[i+1]){
            nums[i] = nums[i] * 2;
            nums[i+1] = 0;
            }
        }
        int slow = 0; 
        for(int fast = 0; fast <= n-1; fast++){
            if(nums[fast] != 0){
                if(slow != fast){
                    swap(nums[slow], nums[fast]);
                }
                slow++;
            }
        }
        return nums;
    }
};
int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> ans = obj.applyOperations(nums);

    cout << "Array after applying operations: ";
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
