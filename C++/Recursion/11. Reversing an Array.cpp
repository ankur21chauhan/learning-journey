#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
        void rev(vector<int>& arr,int left, int right){
            if(left > right){
                return;
            }
            swap(arr[left], arr[right]);
            rev(arr, left+1, right-1);
        }
    public:
        void reverse(vector<int>& arr){
            rev(arr, 0, arr.size()-1);
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
    var1.reverse(arr);

    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;

}