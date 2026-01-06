#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        bool checkPalindrome(string& str){
            int left = 0, right = str.size()-1;
            while(left<right){
                if(str[left]!=str[right]){
                    return false;
                    
                } 
                left++, right--;
            }
            return true;

        }
};

int main(){
    string input;
    cin>>input;

    A var1;
    bool result = var1.checkPalindrome(input);

    if(result) cout << "Palindrome\n";
    else cout << "Not Palindrome\n";
    return 0;
}