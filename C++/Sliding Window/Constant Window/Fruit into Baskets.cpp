/*There is only one row of fruit trees on the farm, oriented left to right. An integer array called fruits represents the trees, where fruits[i] denotes the kind of fruit produced by the ith tree.



The goal is to gather as much fruit as possible, adhering to the owner's stringent rules:



1) There are two baskets available, and each basket can only contain one kind of fruit. The quantity of fruit each basket can contain is unlimited.

2) Start at any tree, but as you proceed to the right, select exactly one fruit from each tree, including the starting tree. One of the baskets must hold the harvested fruits.

3) Once reaching a tree with fruit that cannot fit into any basket, stop.



Return the maximum number of fruits that can be picked.*/



#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int totalFruits(vector<int>& fruits){
            int n = fruits.size(), maxLen = 0;
            unordered_map<int, int> mpp;
            int l = 0, r = 0;
            while(r < n){
                mpp[fruits[r]]++;

                if(mpp.size() > 2){
                    mpp[fruits[l]]--;
                    if(mpp[fruits[l]] == 0) {
                        mpp.erase(fruits[l]);
                    }
                    l++;
                }

                if(mpp.size() <= 2){
                    int len = r - l + 1;
                    maxLen = max(maxLen, len);
                }
                r++;
            }
            
            return maxLen;
        }
};

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i= 0; i<= arr.size()-1; i++){
        cin>>arr[i];
    }

    Solution obj1;
    cout<<obj1.totalFruits(arr);
    return 0;
    
}