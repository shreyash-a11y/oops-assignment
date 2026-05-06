#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream file("alpha.txt");

    file.seekg(-1, ios::end);

    char ch;

    file.get(ch);

    cout << "Last Character = "
         << ch;

    file.close();

    return 0;
}
