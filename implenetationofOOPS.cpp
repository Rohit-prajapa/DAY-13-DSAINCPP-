#include <iostream>
#include <string>
using namespace std;

class Library {
private: 
    string libraryName;
    string location;
    int numberOfBooks;
    int numberOfMembers;
    string openingHours;

public:
    
    Library(string name, string loc, int books, int members, string hours) {
        libraryName = name;
        location = loc;
        numberOfBooks = books;
        numberOfMembers = members;
        openingHours = hours;
    }

    
    string getLibraryName() {
        return libraryName;
    }

    int getNumberOfBooks() {
        return numberOfBooks;
    }

    void addBook() {
        numberOfBooks++;
        cout << "Book Added Successfully!" << endl;
    }

    void issueBook() {
        if (numberOfBooks > 0) {
            numberOfBooks--;
            cout << "Book Issued Successfully!" << endl;
        } else {
            cout << "No Books Available!" << endl;
        }
    }

    void returnBook() {
        numberOfBooks++;
        cout << "Book Returned Successfully!" << endl;
    }

    void registerMember() {
        numberOfMembers++;
        cout << "Member Registered Successfully!" << endl;
    }

    void searchBook(string bookName) {
        cout << "Searching for book: " << bookName << endl;
    }

    void displayDetails() {
        cout << "\nLibrary Name : " << libraryName << endl;
        cout << "Location : " << location << endl;
        cout << "Number of Books : " << numberOfBooks << endl;
        cout << "Number of Members : " << numberOfMembers << endl;
        cout << "Opening Hours : " << openingHours << endl;
    }
};

int main() {
    Library lib("Central Library", "Pune", 5000, 1200, "9 AM - 8 PM");

    lib.displayDetails();

    lib.addBook();
    lib.issueBook();
    lib.returnBook();
    lib.registerMember();
    lib.searchBook("C++ Programming");

    cout << "\nUpdated Books Count: "<< lib.getNumberOfBooks() << endl;

    return 0;
}