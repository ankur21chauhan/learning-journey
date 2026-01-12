#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector<int> majorityElement(vector<int> arr){
        vector<int> ans;
        int n = arr.size();
        int mini = int(n / 3) +1;
        unordered_map<int, int> mpp;
        for(int i = 0; i <= n-1; i++){
            mpp[arr[i]]++;
            if(mpp[arr[i]] == mini){
                ans.push_back(arr[i]);
            }
            if(ans.size() == 2) break;
        }
        return ans;
    }
};

int main() {
    solution sol;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    vector<int> result = sol.majorityElement(nums);

    cout << "Majority elements (> n/3 times): ";
    for(int x : result){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}