#include<bits/stdc++.h>
using namespace std;
class alternating_pattern{
    public:
        void Apattern(int num){
            for(int i = 0; i <= num; i++){
                int start = 1;
                if(i%2){
                    start = 0;
                }
                for(int j = 0; j <= i; j++){
                    cout<<start<<" ";
                    start = 1-start ;
                }
                cout<<endl;
            }
        }
};

int main(){
    int num;
    cin>>num;
    alternating_pattern pattern;
    pattern.Apattern(num);
    return 0;
}
