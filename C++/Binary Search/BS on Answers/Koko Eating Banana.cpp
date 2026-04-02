#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
        long long findMax(vector<int>& arr){
            int maxi = INT_MIN;
            for(int i = 0; i<= arr.size()-1; i++){
                maxi = max(maxi, arr[i]);
            }
            return maxi;
        }

        long long sum(vector<int>& arr, int hoursLeft){
            long long sum = 0; 
            for(int i = 0; i<= arr.size()-1; i++){
                sum += ceil(((double)arr[i]) / (double)hoursLeft);
            }
            return sum;
        }
        
    public:
        int minEatingSpeed(vector<int>& arr, int hoursLeft){
            int low = 1, high = findMax(arr);
            while(low <= high){
                long long mid = low + (high - low) / 2;
                long long totalHoursTaken = sum(arr, mid);
                if(totalHoursTaken <= hoursLeft){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            return low;
        }
};

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i<= n-1; i++){
        cin>>arr[i];
    }

    int hoursLeft;
    cin>>hoursLeft;

    Solution var1;
    cout<<var1.minEatingSpeed(arr, hoursLeft);
    return 0;
}





