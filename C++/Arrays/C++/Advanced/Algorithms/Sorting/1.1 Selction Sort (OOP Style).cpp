#include<bits/stdc++.h>
using namespace std;
class Solution {
   public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i <= n-2; i++){
            int mini = i;
            for(int j = i; j <= n-1; j++){
                if(nums[j] < nums[mini]){
                    mini = j;
                }
            }
            swap(nums[i], nums[mini]);
        }
        return nums;
    }
};

int main(){
    int n;
    cin>>n;
    
    vector<int> nums(n);
    for(int i = 0; i <= n; i++){
        cin>>nums[i];
    }

    Solution var1;
    vector<int> sorted = var1.selectionSort(nums);

    for(int i = 0; i <= n-1; i++){
        cout<<sorted[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}