#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int maxConsecutive(vector<int>& arr){
            int count = 0, maxi = 0;
            for(int i = 0; i <= arr.size()-1; i++){
                if(arr[i] == 1){
                    count++;
                    maxi = max(maxi, count);
                }
                else{
                    count = 0;
                }
            }
            return  maxi;
        }
};

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<= n-1; i++){
        cin>>arr[i];
    }

    Solution var1;
    int var2 = var1.maxConsecutive(arr);

    cout<<var2<<endl;


}