#include <iostream>

using namespace std;

void print_arr(int* arr, int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << '\n';
}

void change_size(int*& arr, int size, int new_size) {
    int* new_arr = new int[new_size];
    int* recycler = arr;
    copy(arr, arr + size, new_arr);

    // Increase every elements by size.
    for (int i = 0; i < new_size; i++) new_arr[i] *= new_size;

    delete[] recycler;
    arr = new_arr;
}
int main() {
    int size = 5;
    int* arr = new int[size];

    // Inserting elements.
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    };
    print_arr(arr, size);  // Print initial array.

    int new_size;
    cin >> new_size;

    change_size(arr, size, new_size);
    print_arr(arr, new_size);  // Size has changed, print the new array.
}
