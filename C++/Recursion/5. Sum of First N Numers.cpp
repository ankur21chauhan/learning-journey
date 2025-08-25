#include<bits/stdc++.h>
using namespace std;
class Solution{	
	public:
		int NnumbersSum(int N){
			if(N==0){
                return 0;
            }
            NnumbersSum(N-1);
            
            cout<<N<<endl;
		}
};

int main(){
    int N;
    cin>>N;
    Solution var1;
    cout<<var1.NnumbersSum(N);
    return 0;
}