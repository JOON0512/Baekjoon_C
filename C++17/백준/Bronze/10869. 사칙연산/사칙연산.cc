#include <iostream>
#include <iomanip> // std::setprecision

int main() {
    int A, B;
    std::cin >> A >> B;

    std::cout << A + B << std::endl;    // Addition
    std::cout << A - B << std::endl;    // Subtraction
    std::cout << A * B << std::endl;    // Multiplication
    std::cout << A / B << std::endl;    // Integer division
    std::cout << A % B << std::endl;    // Modulus (remainder)

    // Floating-point division
    // std::cout << std::fixed << std::setprecision(2) << static_cast<double>(A) / B << std::endl;

    return 0;
}
