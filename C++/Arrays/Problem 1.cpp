#include<bits/stdc++.h>
using namespace std;
class A{
    private:
        int sumofarray(int arr[], int n){
            int sum = 0;
            for(int i = 0; i <= n-1; i++){
                sum = sum + arr[i];

            }
            return sum;

        }

    public:
        void array(int arr[], int n){
            for(int i = 0; i <= n-1; i++){
                cin>>arr[i];
            }
            
            int addition_of_elements = sumofarray(arr, n);
            cout<<"Array is : ";

            for(int i = 0; i <= n-1; i++){
                cout<<arr[i]<<" ";
            }

            cout<<endl;
            cout<<"Sum of the Array is : "<<addition_of_elements;


        }
};

int main(){
        int n;
        cin>>n;
        int arr[n];

        A var1;
        var1.array(arr, n);

        return 0;


}