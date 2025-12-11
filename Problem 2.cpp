#include<bits/stdc++.h>
using namespace std;
class A{
    private:
        int counter(int arr[], int n){
            int count = 0;
            for(int i = 0; i <= n-1; i++){
                if(arr[i]%2 == 1){
                    count++; 
                }

            }
            return count;

        }

    public:
        void array(int arr[], int n){
            for(int i = 0; i <= n-1; i++){
                cin>>arr[i];
            }
            
            int counterOFelements = counter(arr, n);



            cout<<"Your array is : ";

            for(int i = 0; i <= n-1; i++){
                cout<<arr[i]<<" ";
            }

            cout<<endl;
            cout<<"number of odds are : "<<counterOFelements;


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