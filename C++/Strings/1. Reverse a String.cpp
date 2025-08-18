#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        void revNum1(vector<char> & str){
            int left = 0, right = str.size()-1;
            while(left<right){
                swap(str[left],str[right]);
                left++, right--;
            }

        }
};

int main(){
    string input;
    cin>>input;

    vector<char> str(input.begin(), input.end());
    A var1;
    var1.revNum1(str);

    for(char c : str){
        cout<<c;
    }
    cout<<endl;
    return 0;
}