#include <iostream>

void reverseArray(const int* arr, int size) {
    if (arr == nullptr || size <= 0) {
        return;
    }

    const int* ptr = arr + size - 1;

    while (ptr >= arr) {
        std::cout << *ptr << " ";

        ptr--;
    }
    std::cout << "\n";
}

int main() {
    const int SIZE = 4;
    int arr[SIZE] = { 5, 8, 6, 4 };
    reverseArray(arr, SIZE);
    return 0;    
}