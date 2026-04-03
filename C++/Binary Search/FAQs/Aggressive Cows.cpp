#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
        bool canWePlace(vector<int>& stalls, int distance, int cows){
            int cowcounter = 1, last = stalls[0];
            for(int i = 1; i<=stalls.size()-1; i++){
                if(stalls[i] - last >= distance){
                    cowcounter++;
                    last = stalls[i];
                }
                if(cowcounter >= cows){ 
                    return true;
                }
            }   
            return false;

        }
    public:
        int aggressiveCows(vector<int>& stalls, int cows){
            sort(stalls.begin(), stalls.end());
            int low = 1, high = stalls[stalls.size()-1] - stalls[0];
            while(low <= high){
                int mid = low + (high - low) / 2;
                if(canWePlace(stalls, mid, cows) == false){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            return high;
        }
};

int main(){
    int n;
    cin>>n;

    vector<int> stalls(n);
    for(int i = 0; i<= n-1; i++){
        cin>>stalls[i];
    }


    int cows;
    cin>>cows;

    Solution var1;
    cout<<var1.aggressiveCows(stalls, cows);

    return 0;
}