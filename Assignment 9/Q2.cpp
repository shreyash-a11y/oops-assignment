#include <iostream>
#include <fstream>
using namespace std;

void countAlphabets() {

    ifstream file("NOTES.TXT");

    char ch;
    int count = 0;

    while (file.get(ch)) {

        if (isalpha(ch)) {
            count++;
        }
    }

    file.close();

    cout << "Number of Alphabets = "
         << count;
}

int main() {

    countAlphabets();

    return 0;
}
