#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int search(vector<int> &nums, int target){
        int n = nums.size();
        int low = 0, high = n - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == target){
                return mid;
            }
            else if(target < nums[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return -1;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<= n-1;i++){
        cin>>arr[i];
    }

    int target;
    cin >> target;

    Solution var1;
    cout << var1.search(arr, target);

    return 0;
}