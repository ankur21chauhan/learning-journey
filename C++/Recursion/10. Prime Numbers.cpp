#include<bits/stdc++.h>
using namespace std;
class Solution{	
    private:
        bool prime(int& num, int x){
            if (x > sqrt(num)) {
            return true; 
            }

            if (num % x == 0) {
                return false; 
            }
       
            return prime(num, x + 1); 
    }
	public:
		bool checkPrime(int num){
			//your code goes here
            if(num <= 1){
                return false;
            }
            return prime(num, 2);
		}
};
