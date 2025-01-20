#include <iostream>
#include <iomanip>

int main() {
    int A, B;
    std::cin >> A >> B;
    
    double result = static_cast<double> (A)/B;
    
    std::cout << std::fixed << std::setprecision(10) << result << std::endl;

    return 0;
}
