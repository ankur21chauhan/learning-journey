#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int removeDuplicates(vector<int>& arr){
            int n = arr.size();
            int slow = 0;
            for(int fast = 1; fast <= n-1; fast++){
                if(arr[fast] != arr[slow]){
                    slow++;
                    arr[slow] = arr[fast];
                }
            }
            return slow + 1;
        }
};

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }

    Solution var1;
    int k = var1.removeDuplicates(arr);
    cout<<k<<'\n';

    for (int i = 0; i < k; i++) cout << arr[i] << " ";
    cout << '\n';


    return 0;
}