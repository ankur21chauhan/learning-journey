#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int kDistinctChar(string& s, int k) {
        int n =s.size(), maxLen = 0;
        unordered_map<char, int> mpp; 
        int l = 0, r = 0;
        while(r < n){
            mpp[s[r]]++;
            if(mpp.size() > k){
                    mpp[s[l]]--;
                    if(mpp[s[l]] == 0){
                        mpp.erase(s[l]);
                    }
                    l++;
                }
            if(mpp.size() <= k){
                int len = r - l + 1;
                maxLen = max(len, maxLen);
            }
            r++;
        }
        return maxLen;
    }
};

int main(){
    string s;
    cin>>s;

    int k;
    cin>>k;

    Solution obj1;
    cout<<obj1.kDistinctChar(s, k);
    

}