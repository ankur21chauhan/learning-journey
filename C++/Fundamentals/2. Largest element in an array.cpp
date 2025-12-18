#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int largestElement(vector<int>& arr, int n){
            int maxEle = arr[0];
            for(int i = 0; i <= n-1;i++){
                if(arr[i] > maxEle){
                    maxEle = arr[i];
                }   
            }
            return maxEle;
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