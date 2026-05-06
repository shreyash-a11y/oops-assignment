#include <iostream>
#include <fstream>
using namespace std;

int main() {

    fstream file("hello.txt", ios::out | ios::in);

    string text = "HelloWorld";

    for (int i = 0; i < text.length(); i++) {

        file.put(text[i]);

        cout << "Current Position = "
             << file.tellp() << endl;
    }

    file.seekp(5);

    file << "C++";

    file.close();

    cout << "Word Replaced Successfully";

    return 0;
}
