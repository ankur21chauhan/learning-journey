#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    vector<int> hash(26, 0);

    for(int i = 0; i <= s.size(); i++){
        hash[s[i]-'a']++;
    }

    for(char c = 'a'; c <= 'z'; c++){
        if(hash[c - 'a'] > 0){
            cout<<c<<"-->"<<hash[c-'a']<<endl;
        }
    }
    
    return 0;
}