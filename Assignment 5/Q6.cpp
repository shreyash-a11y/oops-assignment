#include <iostream>
using namespace std;

class Book {
protected:
    string title;
    string author;
    float price;

public:
    void getBookData() {
        cout << "Enter title: ";
        cin >> title;

        cout << "Enter author: ";
        cin >> author;

        cout << "Enter price: ";
        cin >> price;
    }

    void displayBookData() {
        cout << "\nTitle: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

class Textbook : public Book {
private:
    string subject;

public:
    void getTextbookData() {
        getBookData();

        cout << "Enter subject: ";
        cin >> subject;
    }

    void displayTextbookData() {
        displayBookData();

        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Textbook obj;

    obj.getTextbookData();

    cout << "\nTextbook Details:";
    obj.displayTextbookData();

    return 0;
}
