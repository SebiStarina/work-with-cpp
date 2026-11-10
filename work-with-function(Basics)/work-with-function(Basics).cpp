#include <iostream>
const double PI = 3.141592;

double calculateCylinderVolume(double radius, double height) {
    double V = PI * (radius*radius) * height;
    return V;
}

int main() {
    double radius;
    double height;
    std::cout << "Введите радиус: "; std::cin >> radius;
    std::cout << "Введите высоту: "; std::cin >> height;

    std::cout << "Объем цилиндра: " << calculateCylinderVolume(radius, height) << "\n";
    return 0;
}