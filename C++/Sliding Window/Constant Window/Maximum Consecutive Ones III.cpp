#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxConsecutiveOnes3(vector<int>& arr, int k){
        int l = 0, r = 0, maxLen = 0, zeroes = 0;
        while(r < arr.size()){
            if(arr[r] == 0){
                zeroes++;
            }
            if(zeroes > k){
                if(arr[l] == 0){
                    zeroes--;
                }
                l++;
            }
            int len = r - l + 1;
            maxLen = max(len, maxLen);
            r++;
        } 
        return maxLen;
    }
};

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i<= n-1 ;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    Solution obj1;
    cout<<obj1.maxConsecutiveOnes3(arr, k);

    return 0;

}