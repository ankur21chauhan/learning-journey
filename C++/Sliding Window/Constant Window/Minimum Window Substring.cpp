#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string minWindow(string s, string t){
        int minLen = INT_MAX, sIndex = -1;
        int hash[256] = {0};
        for(int i = 0; i<=t.size()-1; i++){ //preinserting the values in hash
            hash[t[i]]++;       // increasing the count and counting as well
        }

        int l = 0, r = 0, count = 0;

        while(r < s.size()){        //iterating through current window
            if(hash[s[r]] > 0){     //character present in the hashmap
                count++;
            }      
            hash[s[r]]--;           //decreasing the count
            
            while(count == t.size()){
                //updating the minimum length and starting index
                if((r - l + 1) < minLen){  
                    minLen = r - l + 1;
                    sIndex = l;
                }

                hash[s[l]]++;     //decreasing the count
                if(hash[s[l]] > 0){
                    count--;
                }
                l++;
            }
            r++;
        }
        return (sIndex == -1) ? "" : s.substr(sIndex, minLen);
    }
};


int main(){
    string s, t;
    cin>>s>>t;

    Solution obj1;
    cout<<obj1.minWindow(s,t);
}