#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int searchInsertPosition(vector<int>& arr, int target){
        int n = arr.size();
        int low = 0, high = n - 1, ans = n;
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] >= target){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i<= n-1; i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;

    Solution var1;
    cout<<var1.searchInsertPosition(arr, target);

    return 0;
}