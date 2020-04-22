#include <iostream>
#include <vector>

int main() {
    int max_number;
    std::cout << "Primes up to: ";
    std::cin >> max_number;

    for (int number = 1; number <= max_number; number++) {
        if (number == 2 or number % 2 == 1) {
            std::vector<int> factors;

            for (int divisor = 1; divisor <= number; divisor++) {
                if (number % divisor == 0) {
                    factors.push_back(divisor);
                }
            }

            if (factors.size() == 2) {
                std::cout << number << " ";
            }
        }
    }
}