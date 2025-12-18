#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int linearSearch(vector<int>& arr, int target){
            for(int i = 0; i <= arr.size()-1; i++){
                if(arr[i] == target){
                    return i;
                }
            }
            return -1;
        }
};
int main(){
    int n, target;
    cin>>n>>target;

    vector<int> arr1(n);
    for (int i = 0; i < n; i++) { 
        cin >> arr1[i];
    }
    Solution var1;
    int result = var1.linearSearch(arr1, target);
    cout<<result;


    
    return 0;
}

