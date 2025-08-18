#include<bits/stdc++.h>
using namespace std;

class A {
    public:
        string largestOdd(string& s) {
            int j = -1, n = s.size();
            
            // piche se odd digit dhoondo
            for(int i = n-1; i >= 0; i--){
                if((s[i]-'0') % 2 == 1){  // odd digit mila
                    j = i;
                    break;
                }
            }

            if(j == -1){
                return "";   // koi odd digit nahi mila
            }


            // 0 se j tak ka substring
            string ans = s.substr(0, j + 1);

            int i = 0;
            while (i < ans.size() && ans[i] == '0') {
                i++;
            }

            if (i == ans.size()) {
                return ""; // agar sirf zeros hi the
            }

            return ans.substr(i);
    }
};

int main(){
    string input;
    cin >> input;

    A var1;
    string result = var1.largestOdd(input);

    cout << result << endl;
    return 0;
}
