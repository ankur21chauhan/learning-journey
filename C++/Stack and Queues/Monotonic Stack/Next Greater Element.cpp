#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> NGE(vector<int>arr){
        vector<int> ans(arr.size());
        stack<int> st; //O(n)
        for(int i = arr.size()-1; i >= 0; i--){  //O(N)
            while(!st.empty() && st.top() <= arr[i]){ //O(N)
                st.pop();
            }
            if(st.empty()){
                ans[i] = -1;
            }
            else{
                ans[i] = st.top();
            }
            st.push(arr[i]);
        }
        return ans;
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
    
    vector<int> res = var1.NGE(arr);

    for(int x : res){
        cout << x << " ";
    }
    
    return 0;

}