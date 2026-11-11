#include <iostream>

void safeSwap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main () {
    int a = 51;
    int b = 24;

    safeSwap(a, b);

    std::cout << a << "\n";
    std::cout << b << "\n";
    return 0;
}
