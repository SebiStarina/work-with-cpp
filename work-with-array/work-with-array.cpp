#include <iostream>

int main() { 
    const int size = 10;

    int arr[size] = {5, 12, -3, 8, 44, 91, 0, 7, 22, 19};

    int result = 0;
    int max = arr[0];

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            result = result + arr[i];
        }
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << "Sum of even elements: " << result << std::endl;
    std::cout << "Maximum element: " << max << std::endl;

    return 0;
}