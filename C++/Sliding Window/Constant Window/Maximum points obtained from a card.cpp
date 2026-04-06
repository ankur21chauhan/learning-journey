#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int maxScore(vector<int>& cardScore, int k){
            int lSum = 0, rSum = 0, maxSum = 0;
            for(int i = 0; i <= k-1; i++){
                lSum += cardScore[i];
                maxSum = lSum;
            }
        
            int rightIndex = cardScore.size()-1;
            for(int i = k - 1; i >= 0; i--){
                lSum -= cardScore[i];
                rSum += cardScore[rightIndex];
                rightIndex--;
                maxSum = max(maxSum, lSum + rSum);
            }
            return maxSum;
        }
};

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i = 0; i<= n-1; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    Solution obj1;
    cout<<obj1.maxScore(arr, k);



    return 0;
}