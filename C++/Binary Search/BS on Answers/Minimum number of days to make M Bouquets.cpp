#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
        bool possibleOrNot(vector<int>& bloomDay, int days, int m, int k){
            int counter = 0, bouquetFormation = 0;
            for(int i = 0; i<= bloomDay.size()-1; i++){
                if(bloomDay[i] <= days){
                    counter++;
                }
                else{
                    bouquetFormation += (counter / k);
                    counter = 0;
                }
            }
            bouquetFormation += (counter / k);
            return bouquetFormation >= m ;
        }

    public:
        int minDays(vector<int>& bloomDay, int m, int k) {
            long long val = m * 1ll * k * 1ll;
            if(val > bloomDay.size()){
                return -1;
            }
            int mini = INT_MAX, maxi = INT_MAX; 
            for(int i = 0; i<= bloomDay.size()-1; i++){
                mini = min(mini, bloomDay[i]);
                maxi = max(maxi, bloomDay[i]);
            }

            int low = mini, high = maxi;
            while(low <= high){
                int mid = low + (high - low) / 2;
                if(possibleOrNot(bloomDay, mid, m, k)){
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

    vector<int> bloomDay(n);
    for(int i = 0; i<= n-1; i++){
        cin>>bloomDay[i];
    }

    int m;
    cin>>m;

    int k;
    cin>>k;

    Solution var1;
    cout<<var1.minDays(bloomDay, m, k);


    return 0;
}