#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream source("source.txt");

    ofstream destination("destination.txt");

    char ch;

    while (source.get(ch)) {
        destination.put(ch);
    }

    source.close();
    destination.close();

    cout << "File Copied Successfully";

    return 0;
}
