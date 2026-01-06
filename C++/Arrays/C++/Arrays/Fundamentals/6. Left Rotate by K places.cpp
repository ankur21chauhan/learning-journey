#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void rotateArray(vector<int>& arr, int k){
            int n = arr.size(), temp[k];
            k = k % n;
            for(int i = 0; i <= k - 1; i++){
                temp[i] = arr[i];
            }
            for(int i = k; i <= n-1; i++){
                arr[i - k] = arr[i];
            }
            for(int i = n - k; i<= n-1; i++){
                arr[i] = temp[i-(n-k)];
            }
    }
};

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    cin >> d;

    Solution obj;
    obj.rotateArray(arr, d);

    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;


}