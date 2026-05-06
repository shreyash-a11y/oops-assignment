#include <iostream>
using namespace std;

template <class T>
int linearSearch(T arr[], int size, T key) {

    for (int i = 0; i < size; i++) {

        if (arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int size = 5;

    int key = 30;

    int result = linearSearch(arr, size, key);

    if (result != -1) {
        cout << "Element Found at Index "
             << result;
    }
    else {
        cout << "Element Not Found";
    }

    return 0;
}
