#include <iostream>
using namespace std;

template <class T>
T findMin(T arr[], int size) {

    T min = arr[0];

    for (int i = 1; i < size; i++) {

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int main() {

    int arr[] = {12, 5, 8, 2, 9};

    int size = 5;

    cout << "Minimum Element = "
         << findMin(arr, size);

    return 0;
}
