#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int largestElement(vector<int>& arr, int n){
            int largest = INT_MIN,  secondLargest = INT_MIN;
            for(int i = 0; i <= n-1; i++){
                if(arr[i] > largest){
                    secondLargest = largest;
                    largest = arr[i];
                }
                else if(arr[i] > secondLargest && largest != arr[i]){
                    secondLargest = arr[i];
                }
            }
            if(secondLargest == INT_MIN){
                return -1;
            }
            return secondLargest;
        }
};
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }

    Solution var1;
    int result = var1.largestElement(arr, n);
    cout<<result;
    
    return 0;
}