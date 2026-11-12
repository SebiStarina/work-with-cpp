#include <iostream>

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    int *ptr = arr;

    for (int i = 0; i < SIZE; i++) {
        *(ptr + i) = i * i; 
    }

    for (int i = 0; i < SIZE; i++) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << "\n";

    return 0;
}