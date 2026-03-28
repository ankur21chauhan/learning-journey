#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
        int firstOcc(vector<int>& arr, int target){
            int low = 0, high = arr.size() - 1, first = -1;
            while(low <= high){
                int mid = (low + high) / 2;
                if(arr[mid] == target){
                    first = mid;
                    high = mid - 1;
                }
                else if(arr[mid] < target){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            return first;
        }

        int lastOcc(vector<int>& arr, int target){
            int low = 0, high = arr.size() - 1, last = -1;
            while(low <= high){
                int mid = (low + high) / 2;
                if(arr[mid] == target){
                    last = mid;
                    low = mid + 1;
                }
                else if(arr[mid] < target){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            return last;
        }

    public:
        vector<int> firstAndlastOcc(vector<int>& arr, int target){
            int first = firstOcc(arr, target);
            if(first == -1){
                return {-1, -1};
            }
            int last = lastOcc(arr, target);

            return{first, last};
        }
};

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    Solution var1;
    vector<int> ans = var1.firstAndlastOcc(arr, target);
    cout<<ans[0]<<" "<<ans[1];

    return 0;
}