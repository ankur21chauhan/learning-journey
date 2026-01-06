#include<bits/stdc++.h>
using namespace std;
void explainQueue(){
    //FIFO
    queue<int> que;
    que.push(2);
    que.push(4);
    que.push(6);
    que.push(8);
    que.push(10);

    while(que.empty()==false){
        cout<<que.front()<<" ";
        que.pop();
        
    }

     
}
int main(){
    explainQueue();
    return 0;
}