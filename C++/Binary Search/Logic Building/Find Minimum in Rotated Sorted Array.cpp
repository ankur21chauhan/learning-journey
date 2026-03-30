#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int findMin(vector<int>& arr){
            int low = 0, high = arr.size()-1, ans = INT_MAX;
            while(low <= high){
                int mid = (low + high) / 2;
                if(arr[low] <= arr[high]){
                    ans = min(ans, arr[low]);
                }
                if(arr[low] <= arr[mid]){
                    ans = min(ans, arr[low]);
                    low = mid + 1 ;
                }
                else{
                    ans = min(ans, arr[mid]);
                    high = mid - 1; 
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

    Solution var1;
    cout<<var1.findMin(arr);
    return 0;
}