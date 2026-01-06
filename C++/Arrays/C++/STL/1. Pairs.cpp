#include<bits/stdc++.h>
using namespace std;
void explainpairs(){
    pair<int,int> variable1  = make_pair(6,9);
    cout<<variable1.first<<" "<<variable1.second<<endl;

    pair<char, float> variable2 = {'A', 2.5};
    cout<<variable2.second<<" "<<variable2.first<<endl;

    pair<pair<int, char>, int>variable3 = {{22, 'M'}, 11};
    cout<<variable3.first.first<<" "<<variable3.second<<endl;

    pair<pair<pair<int,char>,char>,int> v4 = {{{2,'B'},'A'},65};
    cout<<v4.first.first.second;
}
int main(){
    explainpairs();    
    return 0;
}