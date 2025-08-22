#include<bits/stdc++.h>
using namespace std;
class stringS{
	public:
		bool checkString(string& str, string& goal){
			if(str != goal){
				return false;
			}

			for(int i = 0; i <= str.length(); i++){
				string roatedString = str.substr(i) + str.substr(0,i);

				if(roatedString == goal){
					return true;
				}

 			}
			return false;
		}
};
int main(){
    string str, goal;
    getline(cin, str);
    getline(cin, goal);

    stringS var1;
    bool result = var1.checkString(str, goal);
    cout << (result ? "YES" : "NO") << endl;
    return 0;
}