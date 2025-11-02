#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
        void merge(vector <int>& arr, int low, int mid, int high){
            vector<int> temp;
            int left = low;
            int right = mid + 1;
            while(left <= mid && right <= high){
                if(arr[left] <= arr[right]){
                    temp.push_back(arr[left]);
                    left++;
                }
                else{
                    temp.push_back(arr[right]);
                    right++;
                }
            }
            while(left <= mid){
                temp.push_back(arr[left]);
                left++;
            }
            while(right <= high){
                temp.push_back(arr[right]);
                right++;
            }
            for(int i = low; i <= high; i++){
                arr[i] = temp[i-low];
            }
        }
        void mS(vector<int>& arr, int low, int high){
            if(low >= high){
                return;
            }
            int mid = (low + high) / 2;
            mS(arr, low, mid-1);
            mS(arr, mid +1, high);
            merge(arr, low, mid, high);
        }
    public: 
        vector<int> mergeSort(vector<int>& arr, int n){
            mS(arr, 0, n-1);
            return arr;
        }
};

int main(){
    int n; 
    cin>>n;
    vector<int> var1(n);
    for(int i = 0; i <= n - 1; i++){
        cin>>var1[i];
    } 
    Solution var2;
    vector<int> ans = var2.mergeSort(var1, n);
    for(int i = 0; i <= n - 1; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}