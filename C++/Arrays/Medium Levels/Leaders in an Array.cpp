#include<bits/stdc++.h>
using namespace std;
//Brute Force Approach TC = O(N^2), SC = O(N)
class Solution{
    public:
        vector<int> leadersOfarray(vector<int>& arr){
            vector<int> ans;
            int n = arr.size();
            for(int i = 0; i<= n-1; i++){
                bool leaders = true;
                for(int j = i + 1; j <= n-1; j++){
                    if(arr[j] > arr[i]){
                        leaders = false;
                        break;
                    }
                }
                if(leaders == true){
                    ans.push_back(arr[i]);
                }
            }
            return ans;
        }
};

int main(){
    int n;
    if(!(cin>>n)) return 0;
    vector<int> arr(n);
    for(int i = 0; i<= n-1; i++){
        cin>>arr[i];
    }
    Solution var1;
    // Use the returned leaders vector
    vector<int> leaders = var1.leadersOfarray(arr);
    for(size_t i = 0; i < leaders.size(); i++){
        cout<<leaders[i];
        if(i + 1 < leaders.size()) cout<<" ";
    }
    cout<<"\n";
    return 0;
}


//Optimal Solution
class Solution{
    public:
        vector<int> leadersOfarray(vector<int>& arr){
            vector<int> ans; //O(N) --> when all the elements are leader
            int n = arr.size();
            int maxi = INT_MIN;
            for(int i = n-1; i >= 0; i--){ //O(N)
                if(arr[i] > maxi){
                    ans.push_back(arr[i]);
                }
                maxi = max(maxi, arr[i]);
            }
            //reverse(ans.begin(),ans.end()); //O(nlogn)
            return ans;
        }
};
