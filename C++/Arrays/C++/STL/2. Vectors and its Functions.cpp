#include<bits/stdc++.h>
using namespace std;
void explainVectors(){
    //Vector or Dynamic Array
    //initializing and adding values to variable ()

    vector<int> variable1;
    variable1.push_back(1);
    variable1.push_back(2);
            //OR
    variable1.emplace_back(3);
    variable1.emplace_back(4);

    //accessing the variable1 

    for(int i = 1; i<=variable1.size();i++){ // 0 Indexing
        cout<<i<<" ";
    }
    cout<<endl;

    /**************** Functions ***************/
    //Initializing and adding values in a variable
    variable1.push_back(1);

    //Determining size of an array
    cout<<"Size of the Array : "<<variable1.size()<<endl;

    //Determining First and last element
    cout<<"First Element : "<<variable1.front()<<endl; 
    cout<<"Last Element : "<<variable1.back()<<endl; 

    //Earse Function (erasing index 2 and 3)
    vector<int> var2 = {10,20,30,40,50};
    var2.erase(var2.begin()+2,var2.end()-1);
    for(int i : var2){
        cout<<i<<" ";
    }
    cout<<endl;

    //Insert Function (inserting 300 and 400 at same index) 
    vector<int> var3 = {10,20,50};
    var3.insert(var3.begin()+2, {300,400});
    for(int i :var3){
        cout<<i<<" ";
    }
    cout<<endl;

    //Swap Function
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {6,7,8,9,10};

    swap(arr1,arr2);
    for(int i : arr1){
        cout<<i<<" ";
    }
    cout<<endl;


    //Clear Function
    arr1.clear();
    cout<<"Size after clear : "<<arr1.size()<<endl;


 

                

}

int main(){
    explainVectors();
    return 0;
}