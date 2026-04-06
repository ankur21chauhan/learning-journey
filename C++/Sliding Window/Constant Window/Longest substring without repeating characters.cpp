#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int longestNonRepeatingSubString(string s){
        int hash[256];
        for(int i = 0; i < 256; i++){
            hash[i] = -1;
        }

        int l = 0, r = 0, maxLen = 0;
        while(r < s.size()){
            if(hash[s[r]] != -1){  // present in the map
                if(hash[s[r]] >= l){
                    l = hash[s[r]] + 1;
                }
            }
            maxLen = max(maxLen, r - l + 1);
            hash[s[r]] = r;
            r++;
        }
        return maxLen;
    }
};

int main(){
   
    string s;
    cin>>s;

    Solution obj;
    cout<<obj.longestNonRepeatingSubString(s);

    return 0;
}