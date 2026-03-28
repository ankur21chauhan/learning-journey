#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
        int getFloor(vector<int>& arr, int target){
            int n = arr.size();
            int low = 0, high = n-1, ans = -1;
            while(low <= high){
                int mid = (low + high) /2;
                if(arr[mid] <= target){
                    ans = arr[mid];
                    low = mid + 1;

                }
                else{
                    high = mid - 1;
                }
            }
            return ans;

        }

        int getCeil(vector<int>& arr, int target){
            int n = arr.size();
            int low = 0, high = n-1, ans = -1;
            while(low <= high){
                int mid = (low + high) /2;
                if(arr[mid] >= target){
                    ans = arr[mid];
                    high = mid - 1;

                }
                else{
                    low = mid + 1;
                }
            }
            return ans;
        }

    public:
        vector<int> getFloorCeil(vector<int>& arr, int target){
            int floor = getFloor(arr, target);
            int ceil = getCeil(arr, target);
            return {floor, ceil};
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
    vector<int> ans = var1.getFloorCeil(arr, target);
    cout<<ans[0]<<" "<<ans[1];
    return 0; 
}