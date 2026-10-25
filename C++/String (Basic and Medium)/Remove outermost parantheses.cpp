#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        string removeOutermostParantheses(string s){
            string tempstr = "";
            int counter = 0;
            for(int  i = 0; i < s.size(); i++){
                if(s[i] == '(') {
                    if(counter > 0){
                        tempstr += s[i];
                    }
                    counter++;
                }
                else{
                    counter--;
                    if(counter > 0){
                        tempstr += s[i];
                    }
                }
            }
            return tempstr;
        }
};

int main() {
    Solution obj;
    string s;

    cin >> s;

    string result = obj.removeOutermostParantheses(s);

    cout << "Result: " << result << endl;

    return 0;
}
