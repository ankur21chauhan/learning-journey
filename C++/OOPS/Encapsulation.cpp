#include<bits/stdc++.h>
using namespace std;
class Book{
    private:
        vector<bool> isAvailable;
    public:
        vector<string> title;
        vector<string> author;

        Book(vector<string>& title, vector<string>& author, vector<bool>& isAvailable){
            this->title = title;
            this->author = author;
            this->isAvailable = isAvailable;
        }

        void borrowBook(string bookName){
            for(int i = 0; i < title.size(); i++){
                if(title[i] == bookName){
                    if(isAvailable[i] == true){
                        cout<<"Book is Borrowed"<<endl;
                        isAvailable[i] = false;
                        return;
                    }
                    else{
                        cout<<"Book is not available."<<endl;
                    }
                return;

            }
                
            }
            cout<<"Book not Found!"<<endl;
        }

        void returnBook(string bookName){
            for(int i = 0; i < title.size(); i++){
                if(title[i] == bookName){
                    if(isAvailable[i] != true){
                        isAvailable[i] = true;
                        return;
                    }
                    else{
                        cout<<"Book is Available"<<endl;
                    }
                }
            }
            cout<<"Book not Found"<<endl;
        }

        void getAvailability(string bookName){
            for(int i = 0; i < title.size(); i++){
                if(title[i] == bookName) {
                    if(isAvailable[i] == true){
                        cout<<"Book is Available"<<endl;
                        return;
                    }
                    else{
                        cout<<"Book is not Available"<<endl;
                        return;
                    }
                    
                }
            }
            cout<<"Book not Found!"<<endl;
        }


};

int main(){
    int n;
    cout<<"Enter number of books: ";
    cin>>n;

    vector<string> title(n), author(n);
    vector<bool> isAvailable(n, true);

    cin.ignore(); // clear buffer

    // Input books
    for(int i = 0; i < n; i++){
        cout<<"Enter title of book "<<i+1<<": ";
        getline(cin, title[i]);

        cout<<"Enter author of book "<<i+1<<": ";
        getline(cin, author[i]);
    }

    // Create object
    Book b(title, author, isAvailable);

    int choice;
    string bookName;

    while(true){
        cout<<"\n--- MENU ---\n";
        cout<<"1. Borrow Book\n";
        cout<<"2. Return Book\n";
        cout<<"3. Check Availability\n";
        cout<<"4. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        cin.ignore(); // clear newline

        if(choice == 1){
            cout<<"Enter book name: ";
            getline(cin, bookName);
            b.borrowBook(bookName);
        }
        else if(choice == 2){
            cout<<"Enter book name: ";
            getline(cin, bookName);
            b.returnBook(bookName);
        }
        else if(choice == 3){
            cout<<"Enter book name: ";
            getline(cin, bookName);
            b.getAvailability(bookName);
        }
        else if(choice == 4){
            cout<<"Exiting...\n";
            break;
        }
        else{
            cout<<"Invalid choice\n";
        }
    }

    return 0;
}