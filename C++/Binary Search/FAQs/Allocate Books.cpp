#include<bits/stdc++.h>
using namespace std;
class solution{
    private:
        int countStudents(vector<int>& arr, int pages){
            int students = 1, pagesStudent = 0;
            for(int i = 0; i<= arr.size()-1; i++){
                if(pagesStudent + arr[i] <= pages){
                    pagesStudent += arr[i];
                }
                else{
                    students++;
                    pagesStudent = arr[i];
                }
            }
            return students;
        }
    public:
        int findPages(vector<int>& arr, int m) {
            if(m > arr.size()){
                return -1;
            }
            int low = *max_element(arr.begin(),arr.end());
            int high = accumulate(arr.begin(),arr.end(),0);
            while(low <= high){
                int mid = low + (high - low) / 2;
                int students = countStudents(arr, mid);
                if(students > m){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            return low;
        }
};

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i = 0; i<= n-1; i++){
        cin>>arr[i];
    }

    int m;
    cin>>m;

    solution var1;
    cout<<var1.findPages(arr, m);
    return 0;
}