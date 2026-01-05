#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> rearrangeArray(vector<int>& arr){
            int n = arr.size();
            vector<int> ans(0, n);
            int posIndex = 0, negIndex = 1;
            for(int i = 0; i <= n-1; i++){
                if(arr[i] < 0){
                    negIndex = arr[i];
                    negIndex += 2;
                }
                else{
                    posIndex = arr[i];
                    posIndex +=2;
                }
            }
            return ans;
        }
};


int main() {
    vector<int> A = {1, 2, -4, -5}; 
    
    // Create an instance of the Solution class
    Solution sol;  
    vector<int> ans = sol.rearrangeArray(A);  
    
    // Print the rearranged array
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}