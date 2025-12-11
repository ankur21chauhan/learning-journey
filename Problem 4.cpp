#include<bits/stdc++.h>
using namespace std;
class A{
    private:
        bool arrayIsSorted(int arr[], int n){
            for(int i = 1; i < n-1; i++){
                if(arr[i]<arr[i-1]){
                    return false;
                }
            }
            return true;
        }
    
    public:
        void sortedFunction(int arr[], int n){
            if(arrayIsSorted(arr, n)){
                cout<<"Array is Sorted : ";
            for(int i = 0; i <= n-1; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
                
            }
            else {cout<<"Array is not sorted"<<endl;
            }
            
        }
};

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }

    A var1;
    var1.sortedFunction(arr, n);
}

