#include<bits/stdc++.h>
using namespace std;
class A{
    private:
        void reverse(vector<char>& str, int left, int right){
            if(left >= right){
                return;
            }
            swap(str[left], str[right]);
            reverse(str, left +1, right - 1);

        }
    public:
        vector<char> reverseString(vector<char>& str){
            reverse(str, 0, str.size()-1);
            return str;
        }
};

int main(){
    string input;
    cin>>input;

    vector<char> str(input.begin(), input.end());
   
    A var1;

    vector<char> ans = var1.reverseString(str);
    for(auto i : ans){
        cout<<i;
    }
    cout<<endl;
    return 0;
}