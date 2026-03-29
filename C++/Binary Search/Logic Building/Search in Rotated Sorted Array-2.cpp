#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool search(int target, vector<int>& arr){
            int low = 0, high = arr.size()-1;
            while(low <= high){
                int mid = (low + high) /2;
                if(arr[mid] == target){
                    return true;
                }

                if(arr[low] == arr[mid] && arr[mid] == arr[high]){
                    low = low + 1;
                    high = high - 1;
                    continue;
                }

                if(arr[low] <= arr[mid]){
                    if(arr[low] <= target && target <= arr[mid]){
                        high = mid - 1;
                    }
                    else{
                        low = mid + 1;
                    }
                }
                else if(arr[mid] <= arr[high]){
                    if(arr[mid] <= target && target <= arr[high]){
                        low = mid + 1;
                    }
                    else{
                        high = mid - 1;
                    }
                }
            }
            return false;
        }
};
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i = 0; i<= n-1; i++){
        cin>>arr[i];
    }

    int target; 
    cin>>target;

    Solution var1;
    bool result = var1.search(target, arr);
    if(!result){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
    return 0;
}
