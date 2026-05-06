#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;

public:

    // Default Constructor
    Book() {
        this->title = "Unknown";
        this->author = "Unknown";
        this->ISBN = "000";
    }

    // Parameterized Constructor
    Book(string title, string author, string ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    // Copy Constructor
    Book(const Book &b) {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }

    string getISBN() {
        return this->ISBN;
    }

    void displayDetails() {
        cout << "Title: " << this->title << endl;
        cout << "Author: " << this->author << endl;
        cout << "ISBN: " << this->ISBN << endl;
        cout << endl;
    }
};

class Library {
private:
    Book books[10];
    int count;

public:

    Library() {
        count = 0;
    }

    bool addNewBook(Book b) {

        if (count >= 10) {
            return false;
        }

        books[count] = b;
        count++;

        return true;
    }

    bool removeBooks(string ISBN);

    void displayDetails() {

        cout << "\nLibrary Books:\n" << endl;

        for (int i = 0; i < count; i++) {
            books[i].displayDetails();
        }
    }
};

bool Library::removeBooks(string ISBN) {

    for (int i = 0; i < count; i++) {

        if (books[i].getISBN() == ISBN) {

            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }

            count--;

            return true;
        }
    }

    return false;
}

int main() {

    Library lib;

    // Initializer List
    Book b1("C++", "Bjarne", "101");
    Book b2("Python", "Guido", "102");
    Book b3("Java", "James", "103");

    // Copy Constructor
    Book b4(b1);

    // Dynamic Initialization
    Book *b5 = new Book("DBMS", "Korth", "104");

    lib.addNewBook(b1);
    lib.addNewBook(b2);
    lib.addNewBook(b3);
    lib.addNewBook(b4);
    lib.addNewBook(*b5);

    cout << "Books after adding:\n";
    lib.displayDetails();

    if (lib.removeBooks("103")) {
        cout << "Book Removed Successfully\n";
    }
    else {
        cout << "Book Not Found\n";
    }

    cout << "\nBooks after removing:\n";
    lib.displayDetails();

    delete b5;

    return 0;
}
