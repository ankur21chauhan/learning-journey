#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        void sortZeroOneTwo(vector<int>& arr){
            int n = arr.size();
            int low = 0, mid = 0, high = n - 1;
            while(mid <= high){
                if(arr[mid] == 0){
                    swap(arr[low], arr[mid]);
                    low++;
                    mid++;
                }
                else if(arr[mid] == 1){
                    mid++;
                }
                else{
                    swap(arr[mid], arr[high]);
                    high--;

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

    solution obj;
    obj.sortZeroOneTwo(arr);

    // print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
