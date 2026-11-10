#include <iostream>

void incrementCounter(); 

int main() {
    incrementCounter();
    incrementCounter();
    incrementCounter();
    return 0;
}

void incrementCounter() {
    static int count = 0;
    std::cout << "[ " << count++ << " ] ";
};