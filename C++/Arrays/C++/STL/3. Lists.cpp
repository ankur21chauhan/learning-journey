/*list is also a container

In STL, both vector and list are sequence containers, but:

1. vector only has push_back() (to insert at the end), but does not have push_front().
2. list (doubly linked list) has both push_back() and push_front() (to insert at the beginning).
Additionally, inserting/erasing elements in the middle is faster in list, while random access is faster in vector.

So yes, the main difference is that push_front() is available in list, but not in vector.


*/






#include<bits/stdc++.h>
using namespace std;
void explainLists(){

    list<int> ls = {10,20};
    ls.push_front(1);
    ls.push_front(60);

    for(auto i:ls){
        cout<<i<<" ";
    }
     


}

int main(){
    explainLists();
    return 0;
}