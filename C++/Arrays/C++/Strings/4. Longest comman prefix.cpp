#include<bits/stdc++.h>
using namespace std;
class a{
    public:
        string longestCommanPrefix(vector<string>str){
            if(str.empty()){
                return "";
            }
            sort(str.begin(),str.end());

            string first = str[0];
            string last = str[str.size()-1];

            string ans = "";
            int minLenght = min(first.size()-1, last.size()-1);

            for(int i = 0; i<minLenght; i++){
                if(first[i] != last[i]){
                    return ans;
                }
                ans += first[i];
            }
            return ans;
        }
};

int main(){
    int num;
    cin>>num;

    vector<string> str(num);
    for(int i = 0; i<=num-1; i++){
        cin>>str[i];
    }

    a var1;
    string result = var1.longestCommanPrefix(str);
    cout<<result<<endl;

    return 0;
    
}