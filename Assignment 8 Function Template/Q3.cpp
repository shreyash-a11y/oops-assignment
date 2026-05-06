#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T arr[], int size) {

    for (int i = 0; i < size - 1; i++) {

        for (int j = 0; j < size - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {

                T temp;

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    int arr[] = {5, 2, 8, 1, 9};

    int size = 5;

    bubbleSort(arr, size);

    cout << "Sorted Array: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
