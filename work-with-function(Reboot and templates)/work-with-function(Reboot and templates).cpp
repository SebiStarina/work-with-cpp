#include <iostream>
template<typename T>

T getMax(T x, T y) {
    return (x > y) ? x : y;
}


int main() {
    std::cout << "Максимум среди интов: " << getMax(20, 21) << "\n";

    std::cout << "Максимум среди даблов: " << getMax(2.5, 2.6) << "\n";

    std::cout << "Максимум среди стрингов: " << getMax("42", "51") << "\n";

    return 0;
}