#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
        int sumOfDivisor(vector<int>& arr, int threshold){
            int sum = 0;
            for(int i = 0; i<= arr.size()-1; i++){
                sum += ceil(((double)arr[i]) / ((double)threshold));
            }
            return sum;
        }

    public:
        int smallestDivisor(vector<int>& arr, int threshold){
            if(arr.size() > threshold){
                return -1;
            }
            int low = 1, high = *max_element(arr.begin(), arr.end());
            while(low <= high){
                int mid = low + (high - low) / 2;
                if(sumOfDivisor(arr, mid) <= threshold){
                    high = mid -1;
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

    int threshold;
    cin>>threshold;

    Solution var1;
    cout<<var1.smallestDivisor(arr,threshold);

    return 0;
}