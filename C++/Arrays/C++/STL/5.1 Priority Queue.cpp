#include<bits/stdc++.h>
using namespace std;
void explainpriorityQueue(){
    //stores the highest element at the top
    priority_queue<int> pq;
    pq.push(5);
    pq.push(10);
    pq.push(15);
    pq.push(2);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;


    //also known as max heap 
    priority_queue<int> pq1;
    pq1.push(100);
    pq1.push(200);
    pq1.push(300);
    pq1.push(400);
    pq1.push(500);
    while(pq1.empty()==false){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl;



    // can also be reversed (min heap)
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(100);
    pq2.push(200);
    pq2.push(300);
    pq2.push(400);
    pq2.push(500);
    while(pq2.empty()==false){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }

}
int main(){
    explainpriorityQueue();
    return 0;

}