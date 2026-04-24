#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int>NGE2(vector<int>& arr){
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i = 2*n-1; i >= 0; i--){
            while(!st.empty() && st.top() <= arr[i % n]){
                st.pop();
            }
            if(i < n){
                ans[i] = st.empty() ? -1 : st.top();
            }
            st.push(arr[i % n]);
        }
        return ans;
    }
};

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    Solution var1;
    vector<int>ans = var1.NGE2(arr);

    for(auto x : ans){
        cout<<x<<" ";
    }
    return 0;
}