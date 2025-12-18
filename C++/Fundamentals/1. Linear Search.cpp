#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& arr, int target) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == target) {   
                return i;
            }
        }
        return -1; 
    }
};

int main() {
    int n, target;
    cin >> n >> target;      

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution var1;
    int result = var1.linearSearch(arr, target);   
    cout << result << endl;

    return 0;
}
