/*
TC = O(n1 + n2)
SC = O(n1 + n2)
*/

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> unionArray(vector<int>& nums1, vector<int>& nums2){
            int n1 = nums1.size();
            int n2 = nums2.size();
            int i = 0;
            int j = 0;

            vector<int> Union;
            while(i < n1 && j <n2){
                if(nums1[i] <= nums2[j]){
                    if(Union.size() == 0 || Union.back() != nums1[i]){
                        Union.push_back(nums1[i]);
                    }
                    i++;
                }
                else{
                    if(Union.size() == 0 || Union.back() != nums2[j]){
                        Union.push_back(nums2[j]);
                    }
                    j++;
                    
                }
            }
            while(j < n2){
                if(Union.size() == 0 || Union.back() != nums2[j]){
                    Union.push_back(nums2[j]);
                }
                j++;
            }
            while(i < n1){
                if(Union.size() == 0 || Union.back() != nums1[i]){
                     Union.push_back(nums1[i]);
                }
                i++;
            }
            return Union;
        }
    };

int main() {
    int n1, n2;
    cin >> n1;
    vector<int> arr1(n1);
    for (int i = 0; i < n1; i++) cin >> arr1[i];
    cin >> n2;
    vector<int> arr2(n2);
    for (int i = 0; i < n2; i++) cin >> arr2[i];

    Solution obj;
    vector<int> ans = obj.unionArray(arr1, arr2);

    cout << "Union of two arrays: ";
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
    