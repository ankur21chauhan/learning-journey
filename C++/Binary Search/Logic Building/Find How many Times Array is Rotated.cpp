#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        int findNRotation(vector<int>& arr){
            int low = 0, high = arr.size() - 1, index= - 1, ans = INT_MAX;
            while (low<= high)
            {
                int mid = (low + high) /2;
                if(arr[low] <= arr[high]){
                    if(arr[low] < ans){
                        index = low;
                        ans = arr[low];
                    }
                }

/*if(arr[low] < ans){
    index = low;
    ans = arr[low];
}*/  // this part here is nothing but ans = min(ans, arr[low]);
                
                if(arr[low] <= arr[mid]){
                    if(arr[low] < ans){
                        index = low;
                        ans = arr[low];
                    }
                    low = mid + 1;
                }
                else{
                        if(arr[mid] < ans){
                            index = mid;
                            ans = arr[mid];
                        }
                        high = mid - 1;
                }
            }
            return index;
            
        }
};
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }

    solution var1;
    cout<<var1.findNRotation(arr);
    return 0;
}