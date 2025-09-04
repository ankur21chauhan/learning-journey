#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        for(int  i = 0; i <= n-1; i++){
            int j = i;
            while(j > 0 && nums[j - 1] > nums[j]){
                swap(nums[j-1], nums[j]);
                j--;
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
    vector<int> var3 = var2.insertionSort(var1);
    for(int i = 0; i <= n-1; i++){
        cout<<var3[i]<<" ";
    }
    cout<<endl;
    return 0;
}
