#include<bits/stdc++.h>
using namespace std;
class Solution{
    //Brute Force TC = O(N^2)
    public:
        int majorityElement(vector<int>& arr){
            int n = arr.size();
            for(int i = 0; i <= n-1; i++){
                int count = 0;
                for(int j = 0 ; j <= n-1; j++){
                    if(arr[j] == arr[i]){
                        count++;
                    }
                }
                if(count > (n / 2)){
                    return arr[i];
                }
            }
            return -1;
        }
        
};

int main(){
    int n; 
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<= n-1; i++){
        cin>>arr[i];
    }

    Solution var1;
    cout<<var1.majorityElement(arr);

    return 0;

}


// Better Approach TC = O(nLogn)+O(N)
class Solution{
    
    public:
    
    int majorityElement(vector<int>& arr){
        int n = arr.size();
        map<int, int> mpp; // log N
        for(int i = 0; i <= n-1; i++){
            mpp[arr[i]]++; //O(N)
        } 
        for(auto it : mpp){
            if(it.second > (n / 2)){
                return it.first;
            }
        }   //O(n)
    
        return -1;

    }


class Solution{
    /*Optimal Solution by using the Moore's Voting Algorithm 
    TC = O(N) + O(N) <-- if array might not have the majority element otherwise only O(N).
    SC = O(1),*/
    public:
        int majorityElement(vector<int>& arr){
            int n = arr.size();
            int count = 0;
            int element;
            for(int i = 0; i <= n-1; i++){
                if(count == 0){
                    count = 1;
                    element = arr[i];
                }
                else if(arr[i] == element){
                    count++;
                }
                else{
                    count--;
                }
            }
            int count1 = 0;
            for(int i = 0; i <= n-1; i++){
                if(arr[i] == element){
                    count1++;
                }
                if(count1 > (n / 2)){
                    return element;
                }
            }
            return -1;

        }