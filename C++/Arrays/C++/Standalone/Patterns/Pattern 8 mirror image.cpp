#include<bits/stdc++.h>
using namespace std;
class pattern{
    public:
        void pattern8(int num){
             for(int i = 1; i <= num; i++){
            
            
                for(int j=1; j <= i; j++){
                    cout<<j;
                }
                
                for(int j=1; j <= (2*num)-(2*i); j++){
                    cout<<" ";
                }
        
                for(int j=i; j >= 1; j--){
                    cout<<j;
                }

                
                cout<<endl;
            
        }
        }
};

int main(){
    int num;
    cin>>num;
    pattern stars;
    stars.pattern8(num);


    return 0;
}