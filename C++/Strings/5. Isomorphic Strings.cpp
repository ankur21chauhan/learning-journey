#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        bool isomorphicString(string s, string t){
            int sMap[256] = {0}, tMap[256] = {0};
            for(int i = 0; i <= s.size()-1; i++){
                if(sMap[s[i]] != tMap[t[i]]){
                    return false;
                }
                sMap[s[i]] = i+1;
                tMap[t[i]] = i+1;
            }

            return true;
        }
};

int main() {
    A solution;
    string s, t;
    
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    if (s.size() != t.size()) { 
        cout << "Strings are not isomorphic." << endl;
        return 0;
    }

    if (solution.isomorphicString(s, t)) {
        cout << "Strings are isomorphic." << endl;
    } else {
        cout << "Strings are not isomorphic." << endl;
    }
    
    return 0;
}
