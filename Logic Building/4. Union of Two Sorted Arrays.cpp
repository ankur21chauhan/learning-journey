/*
TC = O(n1 log n+ n2 log n) + O(n1+n2)
SC = O(n1 + n2) + O(n1 + n2)
*/

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> unionArray(vector<int>& nums1, vector<int>& nums2){
            int n1 = nums1.size();
            int n2 = nums2.size();
            set<int> st;
            for(int i = 0; i<= n1-1; i++){ //O(n1logn)
                st.insert(nums1[i]);
            }
            for(int i = 0; i<= n2-1; i++){ //O(n2logn)
                st.insert(nums2[i]);
            }

            vector<int> Union;
            for(auto it : st){   //O(n1+n2)
                Union.push_back(it);
            }
            return Union;
        }
};

int main(){
    int n1;
    cin>>n1;
    vector<int> arr1(n1);
    for(int i = 0; i <= n1-1; i++){
        cin>>arr1[i];
    }

    int n2;
    cin>>n2;

    vector<int> arr2(n2);
    for(int i = 0; i <= n2-1; i++){
        cin>>arr2[i];
    }

     Solution var1;
    vector<int> result = var1.unionArray(arr1, arr2);

    cout << "Union of arrays: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}