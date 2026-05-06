#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    string ISBN;
};

class Library {
private:
    Book books[10];
    int count = 0;

public:
    bool addNewBook(string &title, string &author, string &ISBN);

    bool removeBooks(string &ISBN);

    void displayDetails();
};

bool Library::addNewBook(string &title, string &author, string &ISBN) {

    if (count >= 10) {
        return false;
    }

    books[count].title = title;
    books[count].author = author;
    books[count].ISBN = ISBN;

    count++;

    return true;
}

bool Library::removeBooks(string &ISBN) {

    for (int i = 0; i < count; i++) {

        if (books[i].ISBN == ISBN) {

            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }

            count--;

            return true;
        }
    }

    return false;
}

void Library::displayDetails() {

    cout << "\nLibrary Books:\n" << endl;

    for (int i = 0; i < count; i++) {

        cout << "Book " << i + 1 << endl;
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "ISBN: " << books[i].ISBN << endl;
        cout << endl;
    }
}

int main() {

    Library lib;

    string t1 = "C++";
    string a1 = "Bjarne";
    string i1 = "101";

    string t2 = "Python";
    string a2 = "Guido";
    string i2 = "102";

    string t3 = "Java";
    string a3 = "James";
    string i3 = "103";

    string t4 = "DBMS";
    string a4 = "Korth";
    string i4 = "104";

    string t5 = "OS";
    string a5 = "Galvin";
    string i5 = "105";

    lib.addNewBook(t1, a1, i1);
    lib.addNewBook(t2, a2, i2);
    lib.addNewBook(t3, a3, i3);
    lib.addNewBook(t4, a4, i4);
    lib.addNewBook(t5, a5, i5);

    cout << "Books after adding:\n";
    lib.displayDetails();

    string removeISBN = "103";

    if (lib.removeBooks(removeISBN)) {
        cout << "Book Removed Successfully\n";
    }
    else {
        cout << "Book Not Found\n";
    }

    cout << "\nBooks after removing:\n";
    lib.displayDetails();

    return 0;
}
