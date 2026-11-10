#include <iostream>
#include <utility>

int main() {
    
    const int SIZE = 10;
    int arr[SIZE] = {5, 3, 8, 60, 2, 25, 15, 20, -5, 125};
    int operationOfComparisons = 0;
    int operationOfSwap = 0;

    for (int i = 0; i < SIZE - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < SIZE; j++)
        {
            operationOfComparisons++;
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            std::swap(arr[i], arr[minIndex]);
            operationOfSwap++;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    std::cout << "Операции сравнений: " << operationOfComparisons << "\n";
    std::cout << "Операций обмена: " << operationOfSwap << "\n";
    
    return 0;
}