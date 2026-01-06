#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t){
        if(s.length() != t.length()){
        return  false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(), t.end());
        if(s == t){
            return true;
        }
        return false;

    }
    


};

int main(){
    string s, t;
    cin>>s>>t;
    bool result;

    Solution var1;
    result = var1.isAnagram(s, t);

    cout << (result ? "YES" : "NO") << endl;
    return 0;
    

}