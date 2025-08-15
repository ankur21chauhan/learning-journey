#include<bits/stdc++.h>
using namespace std;
class A{
    private:
        void reverse(int arr[], int n){
            int temp[n];
            for(int i = 0; i <= n-1; i++){
                temp[n-1-i] = arr[i]; 
            }

            for(int i = 0; i <= n-1;i++){
                arr[i] = temp[i];
            }
        }

    public:
        void array(int arr[], int n){

            for(int i = 0; i <= n-1; i++){
                cin>>arr[i];
            }
            
            cout<<"Your array is : ";
            for(int i = 0; i <= n-1; i++){
                cout<<arr[i]<<" ";
            }
            reverse(arr, n);
            cout<<endl;
            cout<<"Reversed array is : ";
            for(int i = 0; i <= n-1; i++){
                cout<<arr[i]<<" ";
            }


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