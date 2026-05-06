#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream outFile("data.txt");

    outFile << "This is line one\n";
    outFile << "This is line two\n";
    outFile << "This is line three\n";

    outFile.close();

    ifstream inFile("data.txt");

    inFile.seekg(10);

    cout << "Current Position = "
         << inFile.tellg() << endl;

    char ch;

    cout << "Remaining Content:\n";

    while (inFile.get(ch)) {
        cout << ch;
    }

    inFile.close();

    return 0;
}
