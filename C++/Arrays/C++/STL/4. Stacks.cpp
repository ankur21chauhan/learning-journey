#include<bits/stdc++.h>
using namespace std;
void explainStacks(){
    //LIFO
    stack<int> st;
    st.push(100);
    st.push(200); 

    cout<<st.size()<<" "<<endl;
    cout<<st.top()<<" "<<endl;
    st.pop(); //deletes 200 from the stack
    cout<<st.top()<<endl;
    st.pop(); //deletes 100 from the stack
    cout<<st.top()<<" "; //won't find anything and will give run time error

    
}

void explainmultipleStack(){
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    st.push(10);

    while(st.empty() == false){
        cout<<st.top()<<" ";
        st.pop();
    }
}


int main(){
    
    explainStacks();
    explainmultipleStack();

    return 0;
}