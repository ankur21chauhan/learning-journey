#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
        void reverse(string& s, int left, int right){
            if(left >= right){
                return;
            }
            swap(s[left], s[right]);
            reverse(s, left + 1, right - 1);

        }
    public:
        bool reverseCheck(string s){
            string copy = s;    //taking extra space
            reverse(copy,0,copy.size()-1);
            return(s == copy);
        }


};

int main(){
    string input;
    cin>>input;

    Solution var1;
    cout<<(var1.reverseCheck(input) ? "True" : "False")<<endl;
    return 0;
}