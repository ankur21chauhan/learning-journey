#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void moveZeroes(vector<int>& arr){

            vector<int> temp;
            int n = arr.size();

            for(int i = 0; i <= n-1; i++){
                if(arr[i] != 0){
                    temp.push_back(arr[i]);
                } 
            }

            for(int i = 0; i <= temp.size()-1; i++){
                arr[i] = temp[i];
            }

            for(int i = temp.size(); i <= n-1; i++){
                arr[i] = 0;
            }
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
    var1.moveZeroes(arr); 
    for(int i = 0; i <= n-1; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}