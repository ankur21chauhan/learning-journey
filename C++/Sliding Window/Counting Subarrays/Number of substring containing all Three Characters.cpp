#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int numberofSubstring(string s){
        int counter = 0;
        int lastSeen[3] = {-1,-1,-1};
        for(int i = 0; i <= s.size()-1; i++){
            lastSeen[s[i] - 'a'] = i;
            if(lastSeen[0] != -1 && lastSeen[1] != -1 && lastSeen[2] != -1){
                counter += (1 + min({lastSeen[0], lastSeen[1], lastSeen[2]}));
            }
        }
        return counter;
    }
};


int main(){
    string s;
    cin>>s;

    Solution obj1;
    cout<<obj1.numberofSubstring(s);

    return 0;
}