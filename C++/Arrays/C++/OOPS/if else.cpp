#include<bits/stdc++.h>
using namespace std;
class firstclass{
public:
    void grade(float numbers){
       
        if(numbers >= 32.5){
            cout<<"Congratualtions You had PASSED the Exam!!"<<endl<<"Result = Pass"<<endl<<"Marks = "<<numbers<<endl;
            
            if(numbers >= 90){
                cout<<"Grade A";
            }
            else if(numbers >= 70){
                cout<<"Grade B";
            }
            else if(numbers >= 50){
                cout<<"Grade C";
            }
            else if(numbers >= 32.5){
                cout<<"Grade D";
            }
            
        }
        else{
            cout<<"Sorry You didn't Qualify"<<endl;
            cout<<"Result = Fail"<<endl<<"Marks = "<<numbers;
        }
        

    }
        
        
    
};

int main(){
    float numbers;
    cin>>numbers;
    firstclass marks;
    marks.grade(numbers);
    return 0;
}