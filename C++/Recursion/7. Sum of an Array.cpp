#include<bits/stdc++.h>
using namespace std;
class Solution{	
    private:
        int sum(vector<int>& nums, int i){
            if(i >= nums.size()){
                return 0;
            }
            return nums[i] + sum(nums, i+1);
        }
	public:
		int arraySum(vector<int>& nums){
            return sum(nums, 0);
        }
};

int main(){
     int num;
    cin >> num;  // size of array

    vector<int> nums(num);  
    for(int i=0; i<num; i++){    // input array elements
        cin >> nums[i];
    }

    Solution var1;
    int result = var1.arraySum(nums); 
    cout << result << endl;
    
    return 0;
}