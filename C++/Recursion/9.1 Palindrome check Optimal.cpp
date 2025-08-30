#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
        bool check(string& s, int left, int right){
            if(left >= right){
                return true;
            }
            if(s[left] !=  s[right]){
                return false;
            }
            return check(s, left + 1, right - 1);

        }
    public:
        bool reverseCheck(string s){
            return check(s,0,s.size()-1);

        }


};

int main(){
    string input;
    cin>>input;

    Solution var1;
    cout<<(var1.reverseCheck(input) ? "True" : "False")<<endl;
    return 0;
}