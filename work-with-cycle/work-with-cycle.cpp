#include <iostream>

int main() {
    const int MAX = 999;
    int N;
    int k;
    int d;
    for (int N = 1; N <= 9; N++) {

        for (int k = 0; k <= 9; k++) {

            for (int d = 0; d <= 9; d++) {

                int result = N * N * N + k * k * k + d * d * d;

                if (result <= MAX) {

                    int hundreds = result / 100;
                    int tens = (result / 10) % 10;
                    int units = result % 10;

                    if (hundreds == N && tens == k && units == d) {

                        std::cout << "N: " << N << ", k: " << k << ", d: " << d << std::endl;
                        std::cout << "Result: " << result << std::endl;

                    }

                }

            }

        }
        
    }
    return 0;
}