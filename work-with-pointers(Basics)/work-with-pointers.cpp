#include <iostream>

int main() {
    int integer = 42;
    int *ptr = &integer;
    
    *ptr = 100;

    std::cout << integer << "\n";
    std::cout << *ptr << "\n";

    return 0;
}