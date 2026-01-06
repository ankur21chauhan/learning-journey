#include<bits/stdc++.h>
using namespace std;
void SetContainer(){
    //stores only unique elements in ascending order
    //input 
    set<int> st;
    st.insert(3);
    st.insert(30);
    st.insert(343);
    st.insert(32);
    st.insert(31);
    st.insert(38);
    st.insert(3);
    st.insert(30);


    //output
    cout<<"Set Would be :";
    for(auto i : st){
        cout<<i<<" ";
    }
    cout<<endl; 


    //Functions of Set Container
    //Find

    auto i = st.find(38);
    if(i != st.end()){
        cout<<*i;
    }
    cout<<endl;

    //count

    cout<<"count of 3 is : "<<st.count(3)<<endl;


    //erase

    cout<<"3 is erased from set container : ";
    st.erase(3);
    for(auto i : st){
        cout<<i<<" ";
    }
    cout<<endl;

    //erase any index
    cout<<"Second last index has been erased : ";
    auto it = st.end();
    it--; it--;
    st.erase(it);
    for(auto it : st){
        cout<<it<<" ";
    }
    cout<<endl;

    ////erase within a range
    //cout<<"erased index ranged between 0 and n-1 : ";
    //auto it1 = st.begin();
    //it1++;
    //auto it2 = st.end();
    //it2--;
//
    //st.erase(it1, it2);
    //for(auto i : st){
    //    cout<<i<<" ";
    //}
    //cout<<endl;
//

    //lowerBound  >=

    auto var1 = st.lower_bound(30);
    cout<<"Lower Bound is : "<<*var1<<endl;


    //UpperBound >

    auto var2 = st.upper_bound(38);
    cout<<"Upper Bound is : "<<*var2;




}

void multiSet(){
    //similar to set DS but it also stores repeating elements in ascending order
    
    //initializing
    multiset<int> ms;
    //input
    ms.insert(1);
    ms.insert(1);
    ms.insert(11);
    ms.insert(10);
    ms.insert(12);
    ms.insert(18);

    //output
    for(auto i : ms){
        cout<<i<<" ";
    }
    cout<<endl;


    //count 
    cout<<"Count is "<<ms.count(1)<<endl;

    //erasing only one 1
    auto it = ms.erase(ms.find(1));
    for(auto it : ms){
        cout<<it<<" ";
    }
    cout<<endl;


}

void unorderedSet(){
    unordered_set<int> st;
    st.insert(1);
    st.insert(124);
    st.insert(11);
    st.insert(112);
    st.insert(1324);
    st.insert(100);
    st.insert(10);

    for(auto i : st){
        cout<<i<<" ";
    }

}

int main(){
    SetContainer();
    multiSet();
    unorderedSet();
    return 0;
}