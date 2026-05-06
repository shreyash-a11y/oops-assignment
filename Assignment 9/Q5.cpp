#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {

    char str[100];

    cout << "Enter String: ";
    cin.getline(str, 100);

    cout << "Length = "
         << strlen(str) << endl;

    ofstream outFile("data.txt");

    outFile << str;

    outFile.close();

    char ch;

    ifstream inFile("data.txt");

    cout << "Stored Characters: ";

    while (inFile.get(ch)) {
        cout << ch;
    }

    inFile.close();

    return 0;
}
