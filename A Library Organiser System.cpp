#include<iostream>
#include<string.h>
using namespace std;

class library{
    public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
};

int main(){
    library lib[20];
    int input = 0;
    int count = 0;

    while(input != 3){
        cout << "\nMenu:\n";
        cout << "1. Input book details\n";
        cout << "2. Display book details\n";
        cout << "3. Quit\n";
        cout << "Enter your choice: ";
        cin >> input;
       

        switch(input)
        {
            case 1:
                if(count < 20) {
                    cout << "Enter book id: ";
                    cin >> lib[count].id; 
                    cout << "Enter book name: ";
                    cin.ignore(); // clear newline character from input buffer
                    cin.getline(lib[count].name, 100); 
                    cout << "Enter book author: ";
                    cin.getline(lib[count].author, 100); 
                    cout << "Enter student name: ";
                    cin.getline(lib[count].student, 100); 
                    cout << "Enter book price: ";
                    cin >> lib[count].price; 
                    cout << "Enter book pages: ";
                    cin >> lib[count].pages; 
                    count++;
                } else {
                    cout << "Library is full, can't add more books.\n";
                }
                break;

            case 2:
                if(count == 0) {
                    cout << "No books in the library.\n";
                } else {
                    for(int i = 0; i < count; i++) {
                        cout << "\nBook " << (i+1) << " details:\n";
                        cout << "ID: " << lib[i].id << endl;
                        cout << "Name: " << lib[i].name << endl;
                        cout << "Author: " << lib[i].author << endl;
                        cout << "Student: " << lib[i].student << endl;
                        cout << "Price: " << lib[i].price << endl;  
                        cout << "Pages: " << lib[i].pages << endl;   
                     }   
                }
                break;

            case 3:
                cout << "Exiting program.\n";
                break;
            
            default:
                cout << "Invalid input, please try again.\n";
        }
    }

    return 0;
}