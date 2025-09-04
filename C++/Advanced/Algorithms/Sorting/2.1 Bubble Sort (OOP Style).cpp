#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> bubbleSort(vector<int>& nums) {
            int n = nums.size();
            for(int i = n-1; i >= 0; i--){
                int didSwap = 0;
                for(int j = 0; j <= i-1; j++){
                    if(nums[j] > nums[j+1]){
                        swap(nums[j+1], nums[j]);
                        didSwap = 1;
                    }

                }
                if(didSwap == 0){
                    break;
                }
            }
            return nums;
            
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> var1(n);
    for(int i = 0; i <= n-1; i++){
        cin>>var1[i];
    }
    Solution var2;
    vector<int> sortedArr = var2.bubbleSort(var1);

    for(auto i:sortedArr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
