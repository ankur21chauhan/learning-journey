/* 
TC - O(NlogN)
SC - O(1)  no need of temporary array to store values, as like in merge sort.

*/

#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
        int partition(vector<int>& arr, int low, int high){
            int pivot = arr[low];
            int i = low, j = high;
            while(i < j){
                while(pivot >= arr[i] && i <= high - 1){
                    i++;
                }
                while(pivot < arr[j] && j >= low + 1){
                    j--;
                }
                if(i < j){
                    swap(arr[i], arr[j]);
                }
                
            }
            swap(arr[low], arr[j]);
            return j;
        }
        void qS(vector<int>& arr, int low, int high){
            if(low < high){
                int pIndex = partition(arr, low, high);
                qS(arr, low, pIndex - 1); 
                qS(arr, pIndex + 1, high);
            }
        }
    public:
        vector<int> quickSort(vector<int>& arr){
        qS(arr, 0, arr.size()-1);
        return arr;
        }
};

int main(){
    int n;
    cin>>n;
    vector<int> var1(n);
    for(int i = 0; i <= n-1; i++){
        cin>>var1[i];
    }

    Solution var2;
    vector<int> qSort = var2.quickSort(var1);
    for(int i = 0; i <= n - 1; i++){
        cout<<qSort[i]<<" ";
    }
    cout<<endl;

    return 0;
}
