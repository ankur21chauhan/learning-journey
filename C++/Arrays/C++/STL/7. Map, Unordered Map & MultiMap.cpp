#include<bits/stdc++.h>
using namespace std;
void Map(){
    cout<<"-----------Map----------"<<endl;
    
    map<int, string> mp;
    mp.insert({1, "Ankur"});
    mp[2] = "abc"; 
    mp[3] = "bcd";
    mp[4] = "xyz";

    for(auto  i : mp){
        cout<<i.first<<"-->"<<i.second<<endl;
    }

    auto it = mp.find(4);
    cout<<(*it).first<<"-->"<<(*it).second<<endl;
    
}

void unorderedMap(){
    cout<<"-----------Unordered Map----------"<<endl;


    unordered_map<int, string> mp;
    mp.insert({1, "Ankur"});
    mp[2] = "abc"; 
    mp[3] = "bcd";
    mp[4] = "xyz";

    for(auto  i : mp){
        cout<<i.first<<"-->"<<i.second<<endl;
    }

    
}

void multiMap(){
    cout<<"-----------MultiMap----------"<<endl;
    multimap<int, char> mpp;
    mpp.insert({3, 'a'});
    mpp.insert({1, 'a'});
    mpp.insert({1, 'b'});
    mpp.insert({1, 'a'});
    mpp.insert({2, 'a'});
    mpp.insert({2, 'a'});
    mpp.insert({2, 'b'});

    for(auto i : mpp){
        cout<<i.first<<"-->"<<i.second<<endl;
    }

    //Equal_Range

    cout<<"---Equal_Range Function---"<<endl;

    auto it = mpp.equal_range(3);
    for(auto i = it.first; i != it.second; i++){
        cout<<(*i).first<<"-->"<<(*i).second<<endl;
    }
}
int main(){
    Map();
    unorderedMap();
    multiMap();
    return 0;
}