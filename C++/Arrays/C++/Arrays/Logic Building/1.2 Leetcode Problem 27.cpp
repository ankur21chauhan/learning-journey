//Problem 27 Remove Element

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int slow = 0; 
        for(int fast = 0; fast <= n-1; fast++){
            if(nums[fast] != val){
                if(slow != fast){
                    swap(nums[slow], nums[fast]);
                }
                slow++;
            }
        }
        return slow;
    }
};
int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    cout << "Entered " << n << " elements"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int val;
    cin >> val;

    Solution obj;
    int newLength = obj.removeElement(nums, val);

    cout << "Array after removing " << val << ": ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "New length = " << newLength << endl;

    return 0;
}
