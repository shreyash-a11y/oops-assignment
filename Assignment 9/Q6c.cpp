#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream file("alpha.txt");

    file.seekg(0, ios::end);

    int size = file.tellg();

    cout << "File Size = "
         << size << " bytes";

    file.close();

    return 0;
}
