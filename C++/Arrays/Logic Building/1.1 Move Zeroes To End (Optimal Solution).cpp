/*Optimal Solution
    by using Two pointer approach*/ 
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void MoveZeroesToEnd(vector<int>& arr){
            int n = arr.size();
            int slow = 0;

            for(int fast = 0; fast < n; fast++){
                if(arr[fast] != 5){
                    if(slow != fast){ //swapping only if both are at different positions
                        swap(arr[slow], arr[fast]);
                    }
                    slow++;
                }
            }

        }
};

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    obj.MoveZeroesToEnd(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}