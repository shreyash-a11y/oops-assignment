#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file("alpha.txt");

    for (char ch = 'A'; ch <= 'Z'; ch++) {
        file << ch;
    }

    file.close();

    ifstream inFile("alpha.txt");

    inFile.seekg(9);

    char ch;

    inFile.get(ch);

    cout << "10th Character = "
         << ch;

    inFile.close();

    return 0;
}
