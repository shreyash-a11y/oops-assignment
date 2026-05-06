#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file("NUM.TXT");

    for (int i = 1; i <= 200; i++) {
        file << i << " ";
    }

    file.close();

    cout << "Numbers written successfully";

    return 0;
}
